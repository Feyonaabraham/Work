//coded by FEYONA ABRAHAM
//


//for fast PWM we are selecting pin 3 and 11(timer 2)

void setup() {
  // initialize digital pin 3 as an output.
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);

  TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);  //set fast pwm mode
  TCCR2B = _BV(WGM22) | _BV(CS22);
  OCR2A = 180;
  OCR2B = 50;

  // Duty cycle of A is 50% 
  // Duty cycle of B is 28.2 %
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  TCCR2B = _BV(WGM22) | _BV(CS22);
   

}  
