#ifndef HCS12_IO_H
#define HCS12_IO_H

/* *************************************************************************/
/* This file contains the address definitions for all peripheral registers */
/* and most of the bits of status registers and control registers.         */
/* Author: Dr. Han-Way Huang                                               */
/* Date: July 1, 2004                                                      */
/* 			                                                               */
/* Modified by Navid Mohaghegh (MC9S912DP256 - 2006/12/13)		           */
/***************************************************************************/

//define "byte" and "word"
#ifndef byte
typedef unsigned char byte;
#endif
#ifndef word
typedef unsigned int word;
#endif

#define     IOREGS_BASE  0x0000

#define     _IO8(off)    *(unsigned char  volatile *)(IOREGS_BASE + off)
#define     _IO16(off)   *(unsigned short volatile *)(IOREGS_BASE + off)

#define     PORTA        _IO8(0x00)     //port a = address lines a8 - a15
#define     PORTB        _IO8(0x01)     //port b = address lines a0 - a7
#define     DDRA         _IO8(0x02)     //port a direction register
#define     DDRB         _IO8(0x03)     //port a direction register

#define     PORTE        _IO8(0x08)     //port e = mode,irqandcontrolsignals
#define     DDRE         _IO8(0x09)     //port e direction register
#define     PEAR         _IO8(0x0A)     //port e assignments
#define     MODE         _IO8(0x0B)     //mode register
#define     PUCR         _IO8(0x0C)     //port pull-up control register
#define     RDRIV        _IO8(0x0D)     //port reduced drive control register
#define     EBICTL       _IO8(0x0E)     //stretch control

#define     INITRM       _IO8(0x10)     //ram location register
#define     INITRG       _IO8(0x11)     //register location register
#define     INITEE       _IO8(0x12)     //eeprom location register
#define     MISC         _IO8(0x13)     //miscellaneous mapping control
#define     MTST0        _IO8(0x14)     //reserved
#define     ITCR         _IO8(0x15)     //interrupt test control register
#define     ITEST        _IO8(0x16)     //interrupt test register
#define     MTST1        _IO8(0x17)     //reserved

#define     PARTIDH	     _IO8(0x1a)     //part id high
#define     PARTIDL	     _IO8(0x1b)     //part id low
#define     MEMSIZ0      _IO8(0x1c)     //memory size
#define     MEMSIZ1	     _IO8(0x1d)     //memory size
#define     INTCR        _IO8(0x1e)     //interrupt control register
#define     HPRIO        _IO8(0x1f)     //high priority reg

#define     BKPCT0       _IO8(0x28)     //break control register
#define     BKPCT1       _IO8(0x29)     //break control register
#define     BKP0X        _IO8(0x2a)     //break 0 index register
#define     BKP0H        _IO8(0x2b)     //break 0 pointer high
#define     BKP0L        _IO8(0x2c)     //break 0 pointer low
#define     BKP1X        _IO8(0x2d)     //break 1 index register
#define     BKP1H        _IO8(0x2e)     //break 1 pointer high
#define     BKP1L        _IO8(0x2f)     //break 1 pointer low
#define     PPAGE		_IO8(0x30)     //program page register

#define     PORTK		_IO8(0x32)     //port k data
#define     DDRK		_IO8(0x33)     //port k direction
#define     SYNR         _IO8(0x34)     //synthesizer / multiplier register
#define     REFDV        _IO8(0x35)     //reference divider register
#define     CTFLG        _IO8(0x36)     //reserved
#define     CRGFLG       _IO8(0x37)     //pll flags register
#define     CRGINT       _IO8(0x38)     //pll interrupt register
#define     CLKSEL       _IO8(0x39)     //clock select register
#define     PLLCTL       _IO8(0x3a)     //pll control register
#define     RTICTL       _IO8(0x3b)     //real time interrupt control
#define     COPCTL       _IO8(0x3c)     //watchdog control
#define     FORBYP       _IO8(0x3d)     //
#define     CTCTL        _IO8(0x3e)     //
#define     ARMCOP       _IO8(0x3f)     //cop reset register

#define     TIOS         _IO8(0x40)     //timer input/output select
#define     CFORC        _IO8(0x41)     //timer compare force
#define     OC7M         _IO8(0x42)     //timer output compare 7 mask
#define     OC7D         _IO8(0x43)     //timer output compare 7 data
#define     TCNT         _IO16(0x44)    //timer counter register hi

#define     TSCR1        _IO8(0x46)     //timer system control register
#define     TSCR        _IO8(0x46)      //timer system control register - Added by Navid
#define     TTOV         _IO8(0x47)     //reserved
#define     TCTL1        _IO8(0x48)     //timer control register 1
#define     TCTL2        _IO8(0x49)     //timer control register 2
#define     TCTL3        _IO8(0x4a)     //timer control register 3
#define     TCTL4        _IO8(0x4b)     //timer control register 4
#define     TIE          _IO8(0x4c)     //timer interrupt mask 1
#define     TMSK1        _IO8(0x4c)     ////timer interrupt mask 1 - added by Navid
#define     TSCR2        _IO8(0x4d)     //timer interrupt mask 2
#define     TMSK2        _IO8(0x4d)     //timer interrupt mask 2 - added by Navid
#define     TFLG1        _IO8(0x4e)     //timer flags 1
#define     TFLG2        _IO8(0x4f)     //timer flags 2
#define     TC0          _IO16(0x50)    //timer capture/compare register 0
#define     TC1          _IO16(0x52)    //timer capture/compare register 1
#define     TC2          _IO16(0x54)    //timer capture/compare register 2
#define     TC3          _IO16(0x56)    //timer capture/compare register 3
#define     TC4          _IO16(0x58)    //timer capture/compare register 4
#define     TC5          _IO16(0x5a)    //timer capture/compare register 5
#define     TC6          _IO16(0x5c)    //timer capture/compare register 6
#define     TC7          _IO16(0x5e)    //timer capture/compare register 7
#define     TACTL        _IO8(0x60)     //pulse accumulator controls
#define     PACTL        _IO8(0x60)     //pulse accumulator controls - added by Navid
#define     PAFLG        _IO8(0x61)     //pulse accumulator flags
#define     PACNT        _IO16(0x62)     //pulse accumulator counter 3 --added by Navid
#define     PACN3        _IO8(0x62)     //pulse accumulator counter 3
#define     PACN2        _IO8(0x63)     //pulse accumulator counter 2
#define     PACN1        _IO8(0x64)     //pulse accumulator counter 1
#define     PACN0        _IO8(0x65)     //pulse accumulator counter 0
#define     MCCTL        _IO8(0x66)     //modulus down conunter control
#define     MCFLG        _IO8(0x67)     //down counter flags
#define     ICPAR        _IO8(0x68)     //input pulse accumulator control
#define     DLYCT        _IO8(0x69)     //delay count to down counter
#define     ICOVW        _IO8(0x6a)     //input control overwrite register
#define     ICSYS        _IO8(0x6b)     //input control system control

#define     TIMTST       _IO8(0x6d)     //timer test register

#define     PBCTL        _IO8(0x70)     //pulse accumulator b control
#define     PBFLG        _IO8(0x71)     //pulse accumulator b flags
#define     PA3H         _IO8(0x72)     //pulse accumulator holding register 3
#define     PA2H         _IO8(0x73)     //pulse accumulator holding register 2
#define     PA1H         _IO8(0x74)     //pulse accumulator holding register 1
#define     PA0H         _IO8(0x75)     //pulse accumulator holding register 0
#define     MCCNT        _IO8(0x76)     //modulus down counter register
#define     MCCNTL       _IO8(0x77)     //low byte
#define     TC0H         _IO16(0x78)    //capture 0 holding register
#define     TC1H         _IO16(0x7a)    //capture 1 holding register
#define     TC2H         _IO16(0x7c)    //capture 2 holding register
#define     TC3H         _IO16(0x7e)    //capture 3 holding register

#define     ATD0CTL0     _IO8(0x80)     //adc control 0 (reserved)
#define     ATD0CTL1     _IO8(0x81)     //adc control 1 (reserved)
#define     ATD0CTL2     _IO8(0x82)     //adc control 2
#define     ATD0CTL3     _IO8(0x83)     //adc control 3
#define     ATD0CTL4     _IO8(0x84)     //adc control 4
#define     ATD0CTL5     _IO8(0x85)     //adc control 5
#define     ATD0STAT0    _IO8(0x86)     //adc status register 0
#define     ATD0STAT     _IO16(0x86)    //adc status register 0 - added by Navid
#define     ATD0TEST0    _IO8(0x88)     //adc test (reserved)
#define     ATD0TEST1    _IO8(0x89)     //adc test (reserved)

#define     ATD0STAT1    _IO8(0x8b)     //adc status register 1
#define     ATD0DIEN	 _IO8(0x8d)

#define     PORTAD0      _IO8(0x8f)     //port adc = input only
#define     ATD0DR0      _IO16(0x90)    //adc result 0 register
#define     ATD0DR1      _IO16(0x92)    //adc result 1 register
#define     ATD0DR2      _IO16(0x94)    //adc result 2 register
#define     ATD0DR3      _IO16(0x96)    //adc result 3 register
#define     ATD0DR4      _IO16(0x98)    //adc result 4 register
#define     ATD0DR5      _IO16(0x9a)    //adc result 5 register
#define     ATD0DR6      _IO16(0x9c)    //adc result 6 register
#define     ATD0DR7      _IO16(0x9e)    //adc result 7 register

//same as above -- added by Navid
#define  PORTAD     _IO8(0x8f)
#define  ADR00H     _IO8(0x90)
#define  ADR01H     _IO8(0x92)
#define  ADR02H     _IO8(0x94)
#define  ADR03H     _IO8(0x96)
#define  ADR04H     _IO8(0x98)
#define  ADR05H     _IO8(0x9a)
#define  ADR06H     _IO8(0x9c)
#define  ADR07H     _IO8(0x9e)



#define     PWME		_IO8(0xa0)     //pwm enable
#define     PWMPOL       _IO8(0xa1)     //pwm polarity
#define     PWMCLK       _IO8(0xa2)     //pwm clock select register
#define     PWMPRCLK     _IO8(0xa3)     //pwm prescale clock select register
#define     PWMCAE       _IO8(0xa4)     //pwm center align select register
#define     PWMCTL       _IO8(0xa5)     //pwm control register
#define     PWMTST       _IO8(0xa6)     //reserved
#define     PWMPRSC      _IO8(0xa7)     //reserved
#define     PWMSCLA      _IO8(0xa8)     //pwm scale a
#define     PWMSCLB      _IO8(0xa9)     //pwm scale b
#define     PWMSCNTA     _IO8(0xaa)     //reserved
#define     PWMSCNTB     _IO8(0xab)     //reserved
#define     PWMCNT0      _IO8(0xac)     //pwm channel 0 counter
#define     PWMCNT1      _IO8(0xad)     //pwm channel 1 counter
#define     PWMCNT2      _IO8(0xae)     //pwm channel 2 counter
#define     PWMCNT3      _IO8(0xaf)     //pwm channel 3 counter
#define     PWMCNT4      _IO8(0xb0)     //pwm channel 4 counter
#define     PWMCNT5      _IO8(0xb1)     //pwm channel 5 counter
#define     PWMCNT6      _IO8(0xb2)     //pwm channel 6 counter
#define     PWMCNT7      _IO8(0xb3)     //pwm channel 7 counter
#define     PWMPER0      _IO8(0xb4)     //pwm channel 0 period
#define     PWMPER1      _IO8(0xb5)     //pwm channel 1 period
#define     PWMPER2      _IO8(0xb6)     //pwm channel 2 period
#define     PWMPER3      _IO8(0xb7)     //pwm channel 3 period
#define     PWMPER4      _IO8(0xb8)     //pwm channel 4 period
#define     PWMPER5      _IO8(0xb9)     //pwm channel 5 period
#define     PWMPER6      _IO8(0xba)     //pwm channel 6 period
#define     PWMPER7      _IO8(0xbb)     //pwm channel 7 period
#define     PWMDTY0      _IO8(0xbc)     //pwm channel 0 duty cycle
#define     PWMDTY1      _IO8(0xbd)     //pwm channel 1 duty cycle
#define     PWMDTY2      _IO8(0xbe)     //pwm channel 2 duty cycle
#define     PWMDTY3      _IO8(0xbf)     //pwm channel 3 duty cycle
#define     PWMDTY4      _IO8(0xc0)     //pwm channel 0 duty cycle
#define     PWMDTY5      _IO8(0xc1)     //pwm channel 1 duty cycle
#define     PWMDTY6      _IO8(0xc2)     //pwm channel 2 duty cycle
#define     PWMDTY7      _IO8(0xc3)     //pwm channel 3 duty cycle
#define     PWMSDN       _IO8(0xc4)     //pwm shutdown register

#define     SCI0BDH      _IO8(0xc8)     //sci 0 baud reg hi byte
#define     SCI0BDL      _IO8(0xc9)     //sci 0 baud reg lo byte
#define     SCI0CR1      _IO8(0xca)     //sci 0 control1 reg
#define     SCI0CR2      _IO8(0xcb)     //sci 0 control2 reg
#define     SCI0SR1      _IO8(0xcc)     //sci 0 status reg 1
#define     SCI0SR2      _IO8(0xcd)     //sci 0 status reg 2
#define     SCI0DRH      _IO8(0xce)     //sci 0 data reg hi
#define     SCI0DRL      _IO8(0xcf)     //sci 0 data reg lo
#define     SCI1BDH      _IO8(0xd0)     //sci 1 baud reg hi byte
#define     SCI1BDL      _IO8(0xd1)     //sci 1 baud reg lo byte
#define     SCI1CR1      _IO8(0xd2)     //sci 1 control1 reg
#define     SCI1CR2      _IO8(0xd3)     //sci 1 control2 reg
#define     SCI1SR1      _IO8(0xd4)     //sci 1 status reg 1
#define     SCI1SR2      _IO8(0xd5)     //sci 1 status reg 2
#define     SCI1DRH      _IO8(0xd6)     //sci 1 data reg hi
#define     SCI1DRL      _IO8(0xd7)     //sci 1 data reg lo
#define     SPI0CR1      _IO8(0xd8)     //spi 0 control1 reg
#define     SPI0CR2      _IO8(0xd9)     //spi 0 control2 reg
#define     SPI0BR       _IO8(0xda)     //spi 0 baud reg
#define     SPI0SR       _IO8(0xdb)     //spi 0 status reg hi

#define     SPI0DR       _IO8(0xdd)     //spi 0 data reg

#define     IBAD		_IO8(0xe0)     //i2c bus address register
#define     IBFD		_IO8(0xe1)     //i2c bus frequency divider
#define     IBCR		_IO8(0xe2)     //i2c bus control register
#define     IBSR		_IO8(0xe3)     //i2c bus status register
#define     IBDR	    	_IO8(0xe4)     //i2c bus message data register

#define     DLCBCR1      _IO8(0xe8)     //bdlc control regsiter 1
#define     DLCBSVR	     _IO8(0xe9)     //bdlc state vector register
#define     DLCBCR2	     _IO8(0xea)     //bdlc control register 2
#define     DLCBDR	  	_IO8(0xeb)     //bdlc data register
#define     DLCBARD	     _IO8(0xec)     //bdlc analog delay register
#define     DLCBRSR	     _IO8(0xed)     //bdlc rate select register
#define     DLCSCR		_IO8(0xee)     //bdlc control register
#define     DLCBSTAT	_IO8(0xef)     //bdlc status register
#define     SPI1CR1      _IO8(0xf0)     //spi 1 control1 reg
#define     SPI1CR2      _IO8(0xf1)     //spi 1 control2 reg
#define     SPI1BR       _IO8(0xf2)     //spi 1 baud reg
#define     SPI1SR       _IO8(0xf3)     //spi 1 status reg hi

#define     SPI1DR       _IO8(0xf5)     //spi 1 data reg

#define     SPI2CR1      _IO8(0xf8)     //spi 2 control1 reg
#define     SPI2CR2      _IO8(0xf9)     //spi 2 control2 reg
#define     SPI2BR       _IO8(0xfa)     //spi 2 baud reg
#define     SPI2SR       _IO8(0xfb)     //spi 2 status reg hi

#define     SPI2DR       _IO8(0xfd)     //spi 2 data reg

#define     FCLKDIV	     _IO8(0x100)    //flash clock divider
#define     FSEC		_IO8(0x101)    //flash security register
#define     FTSTMOD		_IO8(0x102)
#define     FCNFG		_IO8(0x103)    //flash configuration register
#define     FPROT		_IO8(0x104)    //flash protection register
#define     FSTAT		_IO8(0x105)    //flash status register
#define     FCMD		_IO8(0x106)    //flash command register
#define     FADDRHI      _IO8(0x108)    //flash address high byte
#define     FADDRLO      _IO8(0x109)    //flash address low byte
#define     FDATAHI      _IO8(0x10a)    //flash data high byte
#define     FDATALO      _IO8(0x10b)
#define     ECLKDIV	     _IO8(0x110)    //eeprom clock divider

#define     ECNFG		_IO8(0x113)    //eeprom configuration register
#define     EPROT		_IO8(0x114)    //eeprom protection register
#define     ESTAT		_IO8(0x115)    //eeprom status register
#define     ECMD		_IO8(0x116)    //eeprom command register
#define     EADDRHI      _IO8(0x118)    //eeprom address high byte
#define     EADDRLO      _IO8(0x119)    //eeprom address low byte
#define     EDATAHI      _IO8(0x11a)    //eeprom data high byte
#define     EDATALO      _IO8(0x11b)    //eeprom data low byte

#define     ATD1CTL0     _IO8(0x120)    //adc1 control 0 (reserved)
#define     ATD1CTL1     _IO8(0x121)    //adc1 control 1 (reserved)
#define     ATD1CTL2     _IO8(0x122)    //adc1 control 2
#define     ATD1CTL3     _IO8(0x123)    //adc1 control 3
#define     ATD1CTL4     _IO8(0x124)    //adc1 control 4
#define     ATD1CTL5     _IO8(0x125)    //adc1 control 5
#define     ATD1STAT0    _IO8(0x126)    //adc1 status register 0

#define     ATD1TEST0    _IO8(0x128)    //adc1 test (reserved)
#define     ATD1TEST1    _IO8(0x129)    //adc1 test (reserved)
#define     ATD1STAT1    _IO8(0x12b)    //adc1 status register 1
#define     ATD1DIEN     _IO8(0x12d)    //adc1 input enable register

#define     PORTAD1      _IO8(0x12f)    //port adc1 = input only
#define     ATD1DR0      _IO16(0x130)   //adc1 result 0 register
#define     ATD1DR1      _IO16(0x132)   //adc1 result 1 register
#define     ATD1DR2      _IO16(0x134)   //adc1 result 2 register
#define     ATD1DR3      _IO16(0x136)   //adc1 result 3 register
#define     ATD1DR4      _IO16(0x138)   //adc1 result 4 register
#define     ATD1DR5      _IO16(0x13a)   //adc1 result 5 register
#define     ATD1DR6      _IO16(0x13c)   //adc1 result 6 register
#define     ATD1DR7      _IO16(0x13e)   //adc1 result 7 register
#define     CAN0CTL0	_IO8(0x140)    //can0 control register 0
#define     CAN0CTL1	_IO8(0x141)    //can0 control register 1
#define     CAN0BTR0	_IO8(0x142)    //can0 bus timing register 0
#define     CAN0BTR1	_IO8(0x143)    //can0 bus timing register 1
#define     CAN0RFLG	_IO8(0x144)    //can0 receiver flags
#define     CAN0RIER	_IO8(0x145)    //can0 receiver interrupt enables
#define     CAN0TFLG	_IO8(0x146)    //can0 transmit flags
#define     CAN0TIER	_IO8(0x147)    //can0 transmit interrupt enables
#define     CAN0TARQ	_IO8(0x148)    //can0 transmit message abort control
#define     CAN0TAAK	_IO8(0x149)    //can0 transmit message abort status
#define     CAN0TBSEL	_IO8(0x14a)    //can0 transmit buffer select
#define     CAN0IDAC	_IO8(0x14b)    //can0 identfier acceptance control

#define     CAN0RXERR	_IO8(0x14e)    //can0 receive error counter
#define     CAN0TXERR	_IO8(0x14f)    //can0 transmit error counter
#define     CAN0IDAR0	_IO8(0x150)    //can0 identifier acceptance register 0
#define     CAN0IDAR1	_IO8(0x151)    //can0 identifier acceptance register 1
#define     CAN0IDAR2	_IO8(0x152)    //can0 identifier acceptance register 2
#define     CAN0IDAR3	_IO8(0x153)    //can0 identifier acceptance register 3
#define     CAN0IDMR0	_IO8(0x154)    //can0 identifier mask register 0
#define     CAN0IDMR1	_IO8(0x155)    //can0 identifier mask register 1
#define     CAN0IDMR2	_IO8(0x156)    //can0 identifier mask register 2
#define     CAN0IDMR3	_IO8(0x157)    //can0 identifier mask register 3
#define     CAN0IDAR4	_IO8(0x158)    //can0 identifier acceptance register 4
#define     CAN0IDAR5	_IO8(0x159)    //can0 identifier acceptance register 5
#define     CAN0IDAR6	_IO8(0x15a)    //can0 identifier acceptance register 6
#define     CAN0IDAR7	_IO8(0x15b)    //can0 identifier acceptance register 7
#define     CAN0IDMR4	_IO8(0x15c)    //can0 identifier mask register 4
#define     CAN0IDMR5	_IO8(0x15d)    //can0 identifier mask register 5
#define     CAN0IDMR6	_IO8(0x15e)    //can0 identifier mask register 6
#define     CAN0IDMR7	_IO8(0x15f)    //can0 identifier mask register 7
#define     CAN0RXLG	_IO8(0x160)    //can0 rx foreground buffer thru +$16f
#define     CAN0TXFG	_IO8(0x170)    //can0 tx foreground buffer thru +$17f

#define     CAN1CTL0	_IO8(0x180)    //can1 control register 0
#define     CAN1CTL1	_IO8(0x181)    //can1 control register 1
#define     CAN1BTR0	_IO8(0x182)    //can1 bus timing register 0
#define     CAN1BTR1	_IO8(0x183)    //can1 bus timing register 1
#define     CAN1RFLG	_IO8(0x184)    //can1 receiver flags
#define     CAN1RIER	_IO8(0x185)    //can1 receiver interrupt enables
#define     CAN1TFLG	_IO8(0x186)    //can1 transmit flags
#define     CAN1tier	_IO8(0x187)    //can1 transmit interrupt enables
#define     CAN1tarq	_IO8(0x188)    //can1 transmit message abort control
#define     CAN1taak	_IO8(0x189)    //can1 transmit message abort status
#define     CAN1tbsel	_IO8(0x18a)    //can1 transmit buffer select
#define     CAN1idac	_IO8(0x18b)    //can1 identfier acceptance control

#define     CAN1RXERR	_IO8(0x18e)    //can1 receive error counter
#define     CAN1TXERR	_IO8(0x18f)    //can1 transmit error counter
#define     CAN1IDAR0	_IO8(0x190)    //can1 identifier acceptance register 0
#define     CAN1IDAR1	_IO8(0x191)    //can1 identifier acceptance register 1
#define     CAN1IDAR2	_IO8(0x192)    //can1 identifier acceptance register 2
#define     CAN1IDAR3	_IO8(0x193)    //can1 identifier acceptance register 3
#define     CAN1IDMR0	_IO8(0x194)    //can1 identifier mask register 0
#define     CAN1IDMR1	_IO8(0x195)    //can1 identifier mask register 1
#define     CAN1IDMR2	_IO8(0x196)    //can1 identifier mask register 2
#define     CAN1IDMR3	_IO8(0x197)    //can1 identifier mask register 3
#define     CAN1IDAR4	_IO8(0x198)    //can1 identifier acceptance register 4
#define     CAN1IDAR5	_IO8(0x199)    //can1 identifier acceptance register 5
#define     CAN1IDAR6	_IO8(0x19a)    //can1 identifier acceptance register 6
#define     CAN1IDAR7	_IO8(0x19b)    //can1 identifier acceptance register 7
#define     CAN1IDMR4	_IO8(0x19c)    //can1 identifier mask register 4
#define     CAN1IDMR5	_IO8(0x19d)    //can1 identifier mask register 5
#define     CAN1IDMR6	_IO8(0x19e)    //can1 identifier mask register 6
#define     CAN1IDMR7	_IO8(0x19f)    //can1 identifier mask register 7

#define     CAN1RXFG	_IO8(0x1a0)    //can1 rx foreground buffer thru +$1af
#define     CAN1TXFG	_IO8(0x1b0)    //can1 tx foreground buffer thru +$1bf

#define     CAN2CTL0	_IO8(0x1c0)    //can2 control register 0
#define     CAN2CTL1	_IO8(0x1c1)    //can2 control register 1
#define     CAN2BTR0	_IO8(0x1c2)    //can2 bus timing register 0
#define     CAN2BTR1	_IO8(0x1c3)    //can2 bus timing register 1
#define     CAN2RFLG	_IO8(0x1c4)    //can2 receiver flags
#define     CAN2RIER	_IO8(0x1c5)    //can2 receiver interrupt enables
#define     CAN2TFLG	_IO8(0x1c6)    //can2 transmit flags
#define     CAN2TIER	_IO8(0x1c7)    //can2 transmit interrupt enables
#define     CAN2TARQ	_IO8(0x1c8)    //can2 transmit message abort control
#define     CAN2TAAK	_IO8(0x1c9)    //can2 transmit message abort status
#define     CAN2TBSEL	_IO8(0x1ca)    //can2 transmit buffer select
#define     CAN2IDAC	_IO8(0x1cb)    //can2 identfier acceptance control

#define     CAN2RXERR	_IO8(0x1ce)    //can2 receive error counter
#define     CAN2TXERR	_IO8(0x1cf)    //can2 transmit error counter
#define     CAN2IDAR0	_IO8(0x1d0)    //can2 identifier acceptance register 0
#define     CAN2IDAR1	_IO8(0x1d1)    //can2 identifier acceptance register 1
#define     CAN2IDAR2	_IO8(0x1d2)    //can2 identifier acceptance register 2
#define     CAN2IDAR3	_IO8(0x1d3)    //can2 identifier acceptance register 3
#define     CAN2IDMR0	_IO8(0x1d4)    //can2 identifier mask register 0
#define     CAN2IDMR1	_IO8(0x1d5)    //can2 identifier mask register 1
#define     CAN2IDMR2	_IO8(0x1d6)    //can2 identifier mask register 2
#define     CAN2IDMR3	_IO8(0x1d7)    //can2 identifier mask register 3
#define     CAN2IDAR4	_IO8(0x1d8)    //can2 identifier acceptance register 4
#define     CAN2IDAR5	_IO8(0x1d9)    //can2 identifier acceptance register 5
#define     CAN2IDAR6	_IO8(0x1da)    //can2 identifier acceptance register 6
#define     CAN2IDAR7	_IO8(0x1db)    //can2 identifier acceptance register 7
#define     CAN2IDMR4	_IO8(0x1dc)    //can2 identifier mask register 4
#define     CAN2IDMR5	_IO8(0x1dd)    //can2 identifier mask register 5
#define     CAN2IDMR6	_IO8(0x1de)    //can2 identifier mask register 6
#define     CAN2IDMR7	_IO8(0x1df)    //can2 identifier mask register 7

#define     CAN2rxfg	_IO8(0x1e0)    //can2 rx foreground buffer thru +$1ef
#define     CAN2txfg	_IO8(0x1f0)    //can2 tx foreground buffer thru +$1ff

#define     CAN3CTL0	_IO8(0x200)    //can3 control register 0
#define     CAN3CTL1	_IO8(0x201)    //can3 control register 1
#define     CAN3BTR0	_IO8(0x202)    //can3 bus timing register 0
#define     CAN3BTR1	_IO8(0x203)    //can3 bus timing register 1
#define     CAN3RFLG	_IO8(0x204)    //can3 receiver flags
#define     CAN3RIER	_IO8(0x205)    //can3 receiver interrupt enables
#define     CAN3TFLG	_IO8(0x206)    //can3 transmit flags
#define     CAN3TIER	_IO8(0x207)    //can3 transmit interrupt enables
#define     CAN3TARQ	_IO8(0x208)    //can3 transmit message abort control
#define     CAN3TAAK	_IO8(0x209)    //can3 transmit message abort status
#define     CAN3TBSEL	_IO8(0x20a)    //can3 transmit buffer select
#define     CAN3IDAC	_IO8(0x20b)    //can3 identfier acceptance control

#define     CAN3RXERR	_IO8(0x20e)    //can3 receive error counter
#define     CAN3TXERR	_IO8(0x20f)    //can3 transmit error counter
#define     CAN3IDAR0	_IO8(0x210)    //can3 identifier acceptance register 0
#define     CAN3IDAR1	_IO8(0x211)    //can3 identifier acceptance register 1
#define     CAN3IDAR2	_IO8(0x212)    //can3 identifier acceptance register 2
#define     CAN3IDAR3	_IO8(0x213)    //can3 identifier acceptance register 3
#define     CAN3IDMR0	_IO8(0x214)    //can3 identifier mask register 0
#define     CAN3IDMR1	_IO8(0x215)    //can3 identifier mask register 1
#define     CAN3IDMR2	_IO8(0x216)    //can3 identifier mask register 2
#define     CAN3IDMR3	_IO8(0x217)    //can3 identifier mask register 3
#define     CAN3IDAR4	_IO8(0x218)    //can3 identifier acceptance register 4
#define     CAN3IDAR5	_IO8(0x219)    //can3 identifier acceptance register 5
#define     CAN3IDAR6	_IO8(0x21a)    //can3 identifier acceptance register 6
#define     CAN3IDAR7	_IO8(0x21b)    //can3 identifier acceptance register 7
#define     CAN3IDMR4	_IO8(0x21c)    //can3 identifier mask register 4
#define     CAN3IDMR5	_IO8(0x21d)    //can3 identifier mask register 5
#define     CAN3IDMR6	_IO8(0x21e)    //can3 identifier mask register 6
#define     CAN3IDMR7	_IO8(0x21f)    //can3 identifier mask register 7

#define     CAN3RXFG	_IO8(0x220)    //can3 rx foreground buffer thru +$22f
#define     CAN3TXFG	_IO8(0x230)    //can3 tx foreground buffer thru +$23f

#define     PTT		_IO8(0x240)    //portt data register
#define     PTIT		_IO8(0x241)    //portt input register
#define     DDRT		_IO8(0x242)    //portt direction register
#define     RDRT		_IO8(0x243)    //portt reduced drive register
#define     PERT		_IO8(0x244)    //portt pull device enable
#define     PPST		_IO8(0x245)    //portt pull polarity select

#define     PTS		_IO8(0x248)    //ports data register
#define     PTIS		_IO8(0x249)    //ports input register
#define     DDRS		_IO8(0x24a)    //ports direction register
#define     RDRS		_IO8(0x24b)    //ports reduced drive register
#define     PERS		_IO8(0x24c)    //ports pull device enable
#define     PPSS		_IO8(0x24d)    //ports pull polarity select
#define     WOMS		_IO8(0x24e)    //ports wired or mode register

#define     PTM		_IO8(0x250)    //portm data register
#define     PTIM		_IO8(0x251)    //portm input register
#define     DDRM		_IO8(0x252)    //portm direction register
#define     RDRM		_IO8(0x253)    //portm reduced drive register
#define     PERM		_IO8(0x254)    //portm pull device enable
#define     PPSM		_IO8(0x255)    //portm pull polarity select
#define     WOMM		_IO8(0x256)    //portm wired or mode register
#define     MODRR		_IO8(0x257)    //portm module routing register
#define     PTP		_IO8(0x258)    //portp data register
#define     PTIP		_IO8(0x259)    //portp input register
#define     DDRP		_IO8(0x25a)    //portp direction register
#define     RDRP		_IO8(0x25b)    //portp reduced drive register
#define     PERP		_IO8(0x25c)    //portp pull device enable
#define     PPSP		_IO8(0x25d)    //portp pull polarity select
#define     PIEP		_IO8(0x25e)    //portp interrupt enable register
#define     PIFP		_IO8(0x25f)    //portp interrupt flag register
#define     PTH		_IO8(0x260)    //porth data register
#define     PTIH		_IO8(0x261)    //porth input register
#define     DDRH		_IO8(0x262)    //porth direction register
#define     RDRH		_IO8(0x263)    //porth reduced drive register
#define     PERH		_IO8(0x264)    //porth pull device enable
#define     PPSH		_IO8(0x265)    //porth pull polarity select
#define     PIEH		_IO8(0x266)    //porth interrupt enable register
#define     PIFH		_IO8(0x267)    //porth interrupt flag register
#define     PTJ		_IO8(0x268)    //portp data register
#define     PTIJ		_IO8(0x269)    //portp input register
#define     DDRJ		_IO8(0x26a)    //portp direction register
#define     RDRJ		_IO8(0x26b)    //portp reduced drive register
#define     PERJ		_IO8(0x26c)    //portp pull device enable
#define     PPSJ		_IO8(0x26d)    //portp pull polarity select
#define     PIEJ		_IO8(0x26e)    //portp interrupt enable register
#define     PIFJ		_IO8(0x26f)    //portp interrupt flag register

#define     CAN4CTL0	_IO8(0x280)    //can4 control register 0
#define     CAN4CTL1	_IO8(0x281)    //can4 control register 1
#define     CAN4BTR0	_IO8(0x282)    //can4 bus timing register 0
#define     CAN4BTR1	_IO8(0x283)    //can4 bus timing register 1
#define     CAN4RFLG	_IO8(0x284)    //can4 receiver flags
#define     CAN4RIER	_IO8(0x285)    //can4 receiver interrupt enables
#define     CAN4TFLG	_IO8(0x286)    //can4 transmit flags
#define     CAN4TIER	_IO8(0x287)    //can4 transmit interrupt enables
#define     CAN4TARQ	_IO8(0x288)    //can4 transmit message abort control
#define     CAN4TAAK	_IO8(0x289)    //can4 transmit message abort status
#define     CAN4TBSEL	_IO8(0x28a)    //can4 transmit buffer select
#define     CAN4IDAC	_IO8(0x28b)    //can4 identfier acceptance control

#define     CAN4RXERR	_IO8(0x28e)    //can4 receive error counter
#define     CAN4TXERR	_IO8(0x28f)    //can4 transmit error counter
#define     CAN4IDAR0	_IO8(0x290)    //can4 identifier acceptance register 0
#define     CAN4IDAR1	_IO8(0x291)    //can4 identifier acceptance register 1
#define     CAN4IDAR2	_IO8(0x292)    //can4 identifier acceptance register 2
#define     CAN4IDAR3	_IO8(0x293)    //can4 identifier acceptance register 3
#define     CAN4IDMR0	_IO8(0x294)    //can4 identifier mask register 0
#define     CAN4IDMR1	_IO8(0x295)    //can4 identifier mask register 1
#define     CAN4IDMR2	_IO8(0x296)    //can4 identifier mask register 2
#define     CAN4IDMR3	_IO8(0x297)    //can4 identifier mask register 3
#define     CAN4IDAR4	_IO8(0x298)    //can4 identifier acceptance register 4
#define     CAN4IDAR5	_IO8(0x299)    //can4 identifier acceptance register 5
#define     CAN4IDAR6	_IO8(0x29a)    //can4 identifier acceptance register 6
#define     CAN4IDAR7	_IO8(0x29b)    //can4 identifier acceptance register 7
#define     CAN4IDMR4	_IO8(0x29c)    //can4 identifier mask register 4
#define     CAN4IDMR5	_IO8(0x29d)    //can4 identifier mask register 5
#define     CAN4IDMR6	_IO8(0x29e)    //can4 identifier mask register 6
#define     CAN4IDMR7	_IO8(0x29f)    //can4 identifier mask register 7

#define     CAN4RXFG	_IO8(0x2a0)    //can4 rx foreground buffer thru +$2af
#define     CAN4TXFG	_IO8(0x2b0)    //can4 tx foreground buffer thru +$2bf
/*end of registers */

/* definitions of bits */
#define     BIT7         0x80
#define     BIT6         0x40
#define     BIT5         0x20
#define     BIT4         0x10
#define     BIT3         0x08
#define     BIT2         0x04
#define     BIT1         0x02
#define     BIT0         0x01
#define     NOACCE       0x80
#define     PIPOE        0x20
#define     NECLK        0x10
#define     LSTRE        0x08
#define     RDWE         0x04
#define     MODC         0x80
#define     MODB         0x40
#define     MODA         0x20
#define     IVIS         0x08
#define     EMK          0x02
#define     EME          0x01
#define     PUPKE        0x80
#define     PUPEE        0x10
#define     PUPBE        0x02
#define     PUPAE        0x01
#define     RDPK         0x80
#define     RDPE         0x10
#define     RDPB         0x02
#define     RDPA         0x01
#define     ESTR         0x01
#define     EXSTR1       0x08
#define     EXSTR0       0x04
#define     ROMHM        0x02
#define     ROMON        0x01
#define     WRINT        0x10
#define     INTE         0x80
#define     INTC         0x40
#define     INTA         0x20
#define     INT8         0x10
#define     INT6         0x08
#define     INT4         0x04
#define     INT2         0x02
#define     INT0         0x01
#define     IRQE         0x80
#define     IRQEN        0x40
#define     BKEN         0x80
#define     BKFULL       0x40
#define     BKBDM        0x20
#define     BKTAG        0x10
#define     BK0RWE       0x08
#define     BK0RW        0x04
#define     BK1RWE       0x02
#define     BK1RW        0x01
#define     RTIF         0x80
#define     PROF         0x40
#define     LOCKIF       0x10
#define     LOCK         0x08
#define     TRACK        0x04
#define     SCMIF        0x02
#define     SCM          0x01
#define     RTIE         0x80
#define     LOCKIE       0x10
#define     SCMIE        0x02
#define     PLLSEL       0x80
#define     PSTP         0x40
#define     SYSWAI       0x20
#define     ROAWAI       0x10
#define     PLLWAI       0x08
#define     CWAI         0x04
#define     RTIWAI       0x02
#define     COPWAI       0x01
#define     CME          0x80
#define     PLLON        0x40
#define     AUTO         0x20
#define     ACQ          0x10
#define     PRE          0x04
#define     PCE          0x02
#define     SCME         0x01
#define     WCOP         0x80
#define     RSBCK        0x40
#define     RTIBYP       0x80
#define     COPBYP       0x40
#define     PLLBYP       0x10
#define     FCM          0x02
#define     TEN          0x80
#define     TSWAI        0x40
#define     TSFRZ        0x20
#define     TFFCA        0x10
#define     TOI          0x80           ; TCNT overflow interrupt enable
#define     TOF          0x80           ; TCNT overflow flag
#define     C7I          0x80
#define     C6I          0x40
#define     C5I          0x20
#define     C4I          0x10
#define     C3I          0x08
#define     C2I          0x04
#define     C1I          0x02
#define     C0I          0x01
#define     C7F          0x80
#define     C6F          0x40
#define     C5F          0x20
#define     C4F          0x10
#define     C3F          0x08
#define     C2F          0x04
#define     C1F          0x02
#define     C0F          0x01
#define     TCRE         0x08
#define     PAEN         0x40
#define     PAMOD        0x20
#define     PEDGE        0x10
#define     CLK1         0x08
#define     CLK0         0x04
#define     PAOVI        0x02
#define     PAI          0x01
#define     PAOVF        0x02
#define     PAIF         0x01
#define     MCZI         0x80
#define     MODMC        0x40
#define     RDMCL        0x20
#define     ICLAT        0x10
#define     FLMC         0x08
#define     MCEN         0x04
#define     MCPR1        0x02
#define     MCPR0        0x01
#define     MCZF         0x80
#define     POLF3        0x08
#define     POLF2        0x04
#define     POLF1        0x02
#define     POLF0        0x01
#define     PAEN3        0x08
#define     PAEN2        0x04
#define     PAEN1        0x02
#define     PAEN0        0x01
#define     TFMOD        0x08
#define     PACMX        0x04
#define     BUFEN        0x02
#define     LATQ         0x01
#define     TCBYP        0x02
#define     PBEN         0x40
#define     PBOVI        0x02
#define     PBOVF        0x02
#define     ADPU         0x80
#define     AFFC         0x40
#define     AWAI         0x20
#define     ETRIGLE      0x10
#define     ETRIGP       0x08
#define     ETRIG        0x04
#define     ASCIE        0x02
#define     ASCIF        0x01
#define     SCF          0x80
#define     ETORF        0x20
#define     FIFOR        0x10
#define     CON67        0x80
#define     CON45        0x40
#define     CON23        0x20
#define     CON01        0x10
#define     PSWAI        0x08
#define     PFRZ         0x04
#define     PWMIF        0x80
#define     PWMIE        0x40
#define     PWMRSTRT     0x20
#define     PWMLVL       0x10
#define     PWM7IN       0x04
#define     PWM7INL      0x02
#define     PWM7ENA      0x01
#define     TIEN         0x80   /* changed to TIEN to avoid duplication with the register TIE */
#define     TCIE         0x40
#define     RIE          0x20
#define     ILIE         0x10
#define     TE           0x08
#define     RE           0x04
#define     RWU          0x02
#define     SBK          0x01
#define     TDRE         0x80
#define     TC           0x40
#define     RDRF         0x20
#define     IDLE         0x10
#define     OR           0x08
#define     NF           0x04
#define     FE           0x02
#define     PF           0x01
#define     BRK13        0x04
#define     TXDIR        0x02
#define     RAF          0x01
#define     R8           0x80
#define     T8           0x40
#define     SPIF         0x80
#define     SPTEF        0x20
#define     MODF         0x10
#define     IBEN         0x80
#define     IBIE         0x40
#define     TXAK         0x08
#define     RSTA         0x04
#define     IBSWAI       0x01
#define     TCF          0x80
#define     IAAS         0x40
#define     IBB          0x20
#define     IBAL         0x10
#define     SRW          0x04
#define     IBIF         0x02
#define     RXAK         0x01
#define     IMSG         0x80
#define     CLKS         0x40
#define     IE           0x02
#define     WCM          0x01
#define     BDLCE        0x10
#define     BIDLE        0x01           /* idle bit of BDLC */
#define     WUPIF        0x80
#define     CSCIF        0x40
#define     RSTAT1       0x20
#define     RSTAT0       0x10
#define     TSTAT1       0x08
#define     TSTAT0       0x04
#define     OVRIF        0x02
#define     RXF          0x01
#define     WUPIE        0x80
#define     CSCIE        0x40
#define     RSTATE1      0x20
#define     RSTATE0      0x10
#define     TSTATE1      0x08
#define     TSTATE0      0x04
#define     OVRIE        0x02
#define     RXFIE        0x01
#define     TXE2         0x04
#define     TXE1         0x02
#define     TXE0         0x01
#define     TXEIE2       0x04
#define     TXEIE1       0x02
#define     TXEIE0       0x01
#define     TX2          0x04
#define     TX1          0x02
#define     TX0          0x01

#define PUCR_PUPAE_MASK                 1U
#define PUCR_PUPBE_MASK                 2U
#define PUCR_PUPEE_MASK                 16U
#define PUCR_PUPKE_MASK                 128U

typedef unsigned char  BOOLEAN;
typedef unsigned char  INT8U;                    /* Unsigned  8 bit quantity                           */
typedef signed   char  INT8S;                    /* Signed    8 bit quantity                           */
typedef unsigned int   INT16U;                   /* Unsigned 16 bit quantity                           */
typedef signed   int   INT16S;                   /* Signed   16 bit quantity                           */
typedef unsigned long  INT32U;                   /* Unsigned 32 bit quantity                           */
typedef signed   long  INT32S;                   /* Signed   32 bit quantity                           */
typedef float          FP32;                     /* Single precision floating point                    */
typedef double         FP64;                     /* Double precision floating point                    */

typedef unsigned  char CPU_INT08U;
typedef  unsigned  long      CPU_INT32U;

#define BYTE           INT8S                     /* Define data types for backward compatibility ...   */
#define UBYTE          INT8U                     /* ... to uC/OS V1.xx                                 */
#define WORD           INT16S
#define UWORD          INT16U
#define LONG           INT32S
#define ULONG          INT32U

#define YES 1
#define NO 0

#ifndef  FALSE
#define  FALSE    0
#endif

#ifndef  TRUE
#define  TRUE     1
#endif

/* end of bit definitions for 9s12DP256b */
#include <vectors12.h>

#endif
