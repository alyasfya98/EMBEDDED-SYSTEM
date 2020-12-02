int yellowLED = 8; //set yellow LED to pin 8 
int greenLED  = 9; //set green LED to pin 9


void setup() {
  // initialize digital pin as an output.
  pinMode(yellowLED, OUTPUT); //initialize led yellow as output
  pinMode(greenLED, OUTPUT); //initialize led green as output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(yellowLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(750);                       
  digitalWrite(yellowLED, LOW);    // turn the LED off by making the voltage LOW
  delay(350);                       
  digitalWrite(greenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       
  digitalWrite(greenLED, LOW);    // turn the LED off by making the voltage LOW
  delay(600);                      
}
