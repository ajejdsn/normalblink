/* #####################################
 * Blink
 * Just check your fucking board, and don't
 * look at me like that.
 * #####################################
 */

extern "C" {
  
  void tO(byte); // turn on the led
  void dS(); // delay 1s
}

 void setup() {
  DDRB |= _BV(DDB5);
 }

 void loop() {
 tO(1); dS();
 tO(0); dS();
 } 

 /*Hmph! I'm not the tsundere ATMega328p!
  * I'm just... I'm just blinking with my internal LED! Not because you told me to do that, Baka! Hmph!
  */



  // 500 bytes of rom and 9bytes of ram, 924 bytes of rom in original blink btw
