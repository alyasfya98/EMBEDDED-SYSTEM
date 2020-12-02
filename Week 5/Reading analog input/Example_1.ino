int vals;

void setup() {
  
  Serial.begin(9600); 
    for(;;)
    {
      vals =analogRead(A0); 
      Serial.println(vals);
    }


}
