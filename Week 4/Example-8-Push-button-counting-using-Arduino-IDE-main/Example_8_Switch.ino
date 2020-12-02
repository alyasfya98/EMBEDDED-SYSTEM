int S1 = 8; //set SWITCH 1 to pin 8 
int S2 = 9; //set SWITCH 2 to pin 9
int S3 = 10; //set SWITCH 3 to pin 10 
int S4 = 11; //set SWITCH 4 to pin 11
int counts1=0,counts2=0, counts3=0, counts4=0; //initialize count for each switch from zero

void setup() {
  // initialize switch as an input.
  Serial.begin(9600);
  pinMode(S1, INPUT); //initialize SWITCH 1 as INPUT
  pinMode(S2, INPUT); //initialize SWITCH 2 as INPUT
  pinMode(S3, INPUT); //initialize SWITCH 3 as INPUT
  pinMode(S4, INPUT); //initialize SWITCH 4 as INPUT  

  showNUM(); //function to display number when we pressed the switch 
}

// the loop function runs over and over again forever
void loop() {

  if(digitalRead(S1) == HIGH)
  {
     counts1++; //increase the value of count for pressing switch 1
     showNUM();
     delay(100);
     while(true) //it will count if we didn't release the switch
     {
        if (digitalRead(S1)== LOW)
        break;
     }
  }
  else if(digitalRead(S2) == HIGH)
  {
     counts2++; //increase the value of count for pressing switch 2
     showNUM();
     delay(100);
     while(true)
     {
        if (digitalRead(S2)== LOW)
        break;
     }
  }
   else if(digitalRead(S3) == HIGH)
   {
     counts3++; //increase the value of count for pressing switch 3
     showNUM();
     delay(100);
     while(true)
     {
        if (digitalRead(S3)== LOW)
        break;
     }
   }
   else if(digitalRead(S4) == HIGH)
   {
     counts4++; //increase the value of count for pressing switch 4
     showNUM();
     delay(100);
     while(true)
     {
        if (digitalRead(S4)== LOW)
        break;
     }
  }
}
void showNUM()
{
     Serial.print("Switch 1: ");
     Serial.print(counts1);
     Serial.print("\t Switch 2: ");
     Serial.print(counts2);
     Serial.print("\t Switch 3: ");
     Serial.print(counts3);
     Serial.print("\t Switch 4: ");
     Serial.print(counts4);
     Serial.println();
}
