#define __SFR_OFFSET 0x00
#include "avr/io.h"

.global tO
.global dS

tO:
    TST     R24
    BREQ    1f
    SBI     PORTB,5
    RET
1:
    CBI     PORTB,5
    RET

dS:
    LDI     R18,82
1:
    LDI     R19,243
2:
    LDI     R20,204
3:
    NOP
    DEC     R20
    BRNE    3b
    DEC     R19
    BRNE    2b
    DEC     R18
    BRNE    1b
    RET
