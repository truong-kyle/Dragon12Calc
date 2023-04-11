#include <hcs12.h>
#include <dbug12.h>

#include "lcd.h"
#include "keypad.h"
#include "util.h"

volatile unsigned int keypad_debounce_timer = 0;

void execute_the_jobs() {
	//put the jobs you want to be done here ...
	keypad_debounce_timer++;
	if (keypad_debounce_timer > 400) {
		keypad_debounce_timer = 0; //display_hex_numbcount++;er_on_7segment_LEDs(display_counter++);
		EnableKeyboardAgain();
	}
}

void INTERRUPT rti_isr(void) {
	//clear the RTI - don't block the other interrupts
	CRGFLG = 0x80;

	//for instance if limit is "10", every 10 interrupts do something ...
	if (counter_for_real_time_interrupt
			== counter_for_real_time_interrupt_limit) {
		//reset the counter
		counter_for_real_time_interrupt = 0;

		//do some work
		execute_the_jobs();
	} else
		counter_for_real_time_interrupt++;

}

/**
 * initialize the rti: rti_ctl_value will set the pre-scaler ...
 */
void rti_init(unsigned char rti_ctl_value, unsigned int counter_limit) {
	UserRTI = (unsigned int) &rti_isr; //register the ISR unit

	/**
	 * set the maximum limit for the counter:
	 * if max set to be 10, every 10 interrupts some work will be done
	 */
	counter_for_real_time_interrupt_limit = counter_limit;

	RTICTL = rti_ctl_value;

	// How many times we had RTI interrupts
	counter_for_real_time_interrupt = 0;

	// Enable RTI interrupts
	CRGINT |= 0x80;
	// Clear RTI Flag
	CRGFLG = 0x80;
}
int printres(int x) { //tail recursive function to print each character of the result
	if (x / 10 == 0) {
		DispChar(0, cursor++, x % 10 + '0');
		return (x % 10);
	} else {
		printres(x / 10);
		DispChar(0, cursor++, x % 10 + '0');
	}
}

int main(void) {
	set_clock_24mhz(); //usually done by D-Bug12 anyway
	DDRB = 0xff;
	rti_init(0x11, 10);
	__asm("cli");
	//enable interrupts (maskable and I bit in CCR)

	DDRH = 0x00; //for push buttons
	KeypadInitPort();

	DispInit(2, 16);
	DispClrScr();
	int a = 0;
	int b = 0;
	char op = '!';
	int result = 0;

	while (1) {
		char x = ~PTH;
		if (x)
			printf("DPKey: %x\r\n", x); //print on serial console
		unsigned char c = KeypadReadPort();
		if (c != KEYPAD_KEY_NONE) {
			switch (op) {
			case '!': //first input: will equal 0 if A or B is pressed
				if (c >= '0' && c <= '9') {
					a = a * 10 + (c - '0');
					DispChar(0, cursor++, c);
				}
				if (c == 'A') {
					op = c;
					DispChar(0, cursor++, '+');
				}
				if (c == 'B') {
					op = c;
					DispChar(0, cursor++, '*');
				}
				break;
					
			case 'A'://second input for addition
				if (c >= '0' && c <= '9') {
					b = b * 10 + (c - '0');
					DispChar(0, cursor++, c);
				}
				if (c == 'D') {
					DispChar(0, cursor++, '=');
					result = a + b;
					printres(result);
				}
				break;

			case 'B': //second input for multiplication
				if (c >= '0' && c <= '9') {
					b = b * 10 + (c - '0');
					DispChar(0, cursor++, c);
				}
				if (c == 'D') {
					DispChar(0, cursor++, '=');
					result = a * b;
					printres(result);
				}
				break;
			}

			if (c == 'C') { //always checking for this character
				cursor = 0; //reset count to 0, starts equation from beginning
				a = 0; // a and b are reset to 0 as a placeholder
				b = 0;
				op = '!'; //op is reset to ASCII ! as a placeholder
				DispClrScr();
			}
			printf("Debug: %d\r\nKeypad: %c\r\n", result, c);
		}
		
	}

}

