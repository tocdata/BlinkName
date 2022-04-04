/*-------------

Blinking the LED to display my name in morse code.

-------------*/

// declaring variables
int led1 = D7;

int unit_delay = 100;

// building out timing for each component of morse code
// intra letter delay is one unit
void intra() {
    delay(unit_delay * 1);
};

// inter letter delay is 3 units
void letter() {
    delay(unit_delay * 3);
};

// inter word delay is 7 units
void word() {
    delay(unit_delay * 7);
}

// di or short dot is one unit and needs to turn on and off the led
void di() {
    digitalWrite(led1, HIGH);
    delay(unit_delay * 1);
    digitalWrite(led1, LOW);
    delay(unit_delay);
};

// dah or long dot is three units and needs to turn on and off the led
void dah() {
    digitalWrite(led1, HIGH);
    delay(unit_delay * 3);
    digitalWrite(led1, LOW);
    delay(unit_delay);
};

// detclaring which pin to use for the LED and ensuring it starts in the off position
void setup() {

  pinMode(led1, OUTPUT);
  digitalWrite(led1, LOW);

}

// Main program to loop through my name in morse code

void loop() {
  //Spelling out TOM in morse code
  
  // one dah for T
  dah(); 
  intra();
  letter();
  
  // 3 * dah for O
  for (int i = 0; i<=2; i++) 
  {
    dah();
    intra();
  }
  letter();
  
  // 2 * dah for M
  for (int i = 0; i<=1; i++) 
  {
    dah();
    intra();
  }
  
  word(); //end of word
  
  delay(3000); //wait 3 seconds before starting next loop
}

//end of code
