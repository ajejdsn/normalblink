/*
 * Normal(not) Blink
 * 
 * Uhm...
 * Just... Just check your fucking board and get out.
 * 
 */



#include <avr/io.h>
#include <avr/interrupt.h>

ISR(TIMER1_COMPA_vect)
{
    PORTB ^= _BV(PB5);
}

int main(void)
{
    DDRB |= _BV(PB5); // smth like pinmode
    TCCR1A = 0;
    TCCR1B = _BV(WGM12) | _BV(CS12) | _BV(CS10); // some timer thing @o@
    OCR1A = 7812; // wait
    TIMSK1 = _BV(OCIE1A);
    asm volatile ("" ::: "memory");
    sei();
    for (;;)
    {
        asm volatile ("nop");
    }
}

// 204 bytes of ROM, and 0 bytes of RAM
// 924 bytes of ROM and 9 of RAM in original blink btw
