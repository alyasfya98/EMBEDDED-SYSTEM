int LED1 = 2; //set LED1 to pin 2
int LED2 = 3; //set LED2 to pin 3
int LED3 = 4; //set LED3 to pin 4
int LED4 = 5; //set LED4 to pin 5
int LED5 = 6; //set LED5 to pin 6
int LED6 = 7; //set LED6 to pin 7
int LED7 = 8; //set LED7 to pin 8
int LED8 = 9; //set LED8 to pin 9


void setup() {
  // initialize digital pin as an output.
  pinMode(LED1, OUTPUT); //initialize LED1 as output
  pinMode(LED2, OUTPUT); //initialize LED2 as output
  pinMode(LED3, OUTPUT); //initialize LED3 as output
  pinMode(LED4, OUTPUT); //initialize LED4 as output
  pinMode(LED5, OUTPUT); //initialize LED5 as output
  pinMode(LED6, OUTPUT); //initialize LED6 as output
  pinMode(LED7, OUTPUT); //initialize LED7 as output
  pinMode(LED8, OUTPUT); //initialize LED8 as output

}

// the loop function runs over and over again forever
void loop() 
{
   Blink1();
   Blink2();
   Blink3();
   Blink4();
   Blink5();
   Blink6();
   Blink7();
   Blink8();
                           
}
void Blink1()
{
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(781);                       
  digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
  delay(515);   
}
void Blink2()
{
  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2014);                       
  digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(1348);   
}
void Blink3()
{
  digitalWrite(LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(343);                       
  digitalWrite(LED3, LOW);    // turn the LED off by making the voltage LOW
  delay(573);   
}
void Blink4()
{
  digitalWrite(LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(678);                       
  digitalWrite(LED4, LOW);    // turn the LED off by making the voltage LOW
  delay(1839);   
}
void Blink5()
{
  digitalWrite(LED5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(342);                       
  digitalWrite(LED5, LOW);    // turn the LED off by making the voltage LOW
  delay(534);   
}
void Blink6()
{
  digitalWrite(LED6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1478);                       
  digitalWrite(LED6, LOW);    // turn the LED off by making the voltage LOW
  delay(326);   
}
void Blink7()
{
  digitalWrite(LED7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1859);                       
  digitalWrite(LED7, LOW);    // turn the LED off by making the voltage LOW
  delay(351);   
}
void Blink8()
{
  digitalWrite(LED8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(777);                       
  digitalWrite(LED8, LOW);    // turn the LED off by making the voltage LOW
  delay(888);   
}
