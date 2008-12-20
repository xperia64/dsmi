#ifndef MCU_H
#define MCU_H

//#define MCU_P0				0x80
//#define MCU_SP				0x81
//#define MCU_DPL				0x82
//#define MCU_DPH				0x83
//#define MCU_PCON				0x87
//#define MCU_TCON				0x88
//#define MCU_TMOD				0x89
#define MCU_TL0					0x8A
#define MCU_TL1					0x8B
#define MCU_TH0					0x8C
#define MCU_TH1					0x8D
#define MCU_CKCON				0x8E
//#define MCU_PSCTL				0x8F
//#define MCU_P1				0x90
//#define MCU_TMR3CN			0x91
//#define MCU_TMR3RLL			0x92
//#define MCU_TMR3RLH			0x93
//#define MCU_TMR3L				0x94
//#define MCU_TMR3H				0x95
//#define MCU_USB0ADR			0x96
//#define MCU_USB0DAT			0x97
//#define MCU_SCON				0x98
//#define MCU_SCON0				0x98
//#define MCU_SBUF				0x99
//#define MCU_SBUF0				0x99
//#define MCU_CPT1CN			0x9A
//#define MCU_CPT0CN			0x9B
//#define MCU_CPT1MD			0x9C
//#define MCU_CPT0MD			0x9D
//#define MCU_CPT1MX			0x9E
//#define MCU_CPT0MX			0x9F
//#define MCU_P2				0xA0
//#define MCU_SPI0CFG			0xA1
//#define MCU_SPI0CKR			0xA2
//#define MCU_SPI0DAT			0xA3
//#define MCU_P0MDOUT			0xA4
//#define MCU_P1MDOUT			0xA5
//#define MCU_P2MDOUT			0xA6
//#define MCU_P3MDOUT			0xA7
//#define MCU_IE				0xA8
//#define MCU_CLKSEL			0xA9
//#define MCU_EMI0CN			0xAA
//#define MCU_P3				0xB0
//#define MCU_OSCXCN			0xB1
//#define MCU_OSCICN			0xB2
//#define MCU_OSCICL			0xB3
//#define MCU_FLSCL				0xB6
//#define MCU_FLKEY				0xB7
//#define MCU_IP				0xB8
//#define MCU_CLKMUL			0xB9
//#define MCU_AMX0N				0xBA
//#define MCU_AMX0P				0xBB
//#define MCU_ADC0CF			0xBC
//#define MCU_ADC0L				0xBD
//#define MCU_ADC0H				0xBE
//#define MCU_SMB0CN			0xC0
//#define MCU_SMB0CF			0xC1
//#define MCU_SMB0DAT			0xC2
//#define MCU_ADC0GTL			0xC3
//#define MCU_ADC0GTH			0xC4
//#define MCU_ADC0LTL			0xC5
//#define MCU_ADC0LTH			0xC6
//#define MCU_T2CON				0xC8
#define MCU_TMR2CN				0xC8
//#define MCU_REG0CN			0xC9
//#define MCU_RCAP2L			0xCA
#define MCU_TMR2RLL				0xCA
//#define MCU_RCAP2H			0xCB
#define MCU_TMR2RLH				0xCB
//#define MCU_TL2				0xCC
#define MCU_TMR2L				0xCC
//#define MCU_TH2				0xCD
#define MCU_TMR2H				0xCD
//#define MCU_PSW				0xD0
//#define MCU_REF0CN			0xD1
//#define MCU_P0SKIP			0xD4
//#define MCU_P1SKIP			0xD5
//#define MCU_P2SKIP			0xD6
//#define MCU_USB0XCN			0xD7
//#define MCU_PCA0CN			0xD8
//#define MCU_PCA0MD			0xD9
//#define MCU_PCA0CPM0			0xDA
//#define MCU_PCA0CPM1			0xDB
//#define MCU_PCA0CPM2			0xDC
//#define MCU_PCA0CPM3			0xDD
//#define MCU_PCA0CPM4			0xDE
//#define MCU_ACC				0xE0
//#define MCU_XBR0				0xE1
//#define MCU_XBR1				0xE2
//#define MCU_IT01CF			0xE4
//#define MCU_INT01CF			0xE4
//#define MCU_EIE1				0xE6
//#define MCU_EIE2				0xE7
//#define MCU_ADC0CN				0xE8
//#define MCU_PCA0CPL1			0xE9
//#define MCU_PCA0CPH1			0xEA
//#define MCU_PCA0CPL2			0xEB
//#define MCU_PCA0CPH2			0xEC
//#define MCU_PCA0CPL3			0xED
//#define MCU_PCA0CPH3			0xEE
//#define MCU_RSTSRC			0xEF
//#define MCU_B					0xF0
//#define MCU_P0MODE			0xF1
//#define MCU_P0MDIN			0xF1
//#define MCU_P1MODE			0xF2
//#define MCU_P1MDIN			0xF2
//#define MCU_P2MODE			0xF3
//#define MCU_P2MDIN			0xF3
//#define MCU_P3MODE			0xF4
//#define MCU_P3MDIN			0xF4
//#define MCU_EIP1				0xF6
//#define MCU_EIP2				0xF7
//#define MCU_SPI0CN			0xF8
//#define MCU_PCA0L				0xF9
//#define MCU_PCA0H				0xFA
//#define MCU_PCA0CPL0			0xFB
//#define MCU_PCA0CPH0			0xFC
//#define MCU_PCA0CPL4			0xFD
//#define MCU_PCA0CPH4			0xFE
//#define MCU_VDM0CN			0xFF

#endif // MCU_H
