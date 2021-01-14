/********************************************************************************
 * DESCRIPTION:
 *
 * This example shows how to drive a motor using the PWM and DIR pins.
 * 
 * 
 * CONNECTIONS:
 * 
 * Arduino D3  - Motor Driver PWM Input
 * Arduino D4  - Motor Driver DIR Input
 * Arduino GND - Motor Driver GND
 *
 *
 * AUTHOR   : Kong Wai Weng
 * COMPANY  : Cytron Technologies Sdn Bhd
 * WEBSITE  : www.cytron.io
 * EMAIL    : support@cytron.io
 *
 *******************************************************************************/

 #include "CytronMotorDriver.h"


// Configure the motor driver.
CytronMD motor1(PWM_DIR, 3, 4);  // PWM = Pin 3, DIR = Pin 4.
CytronMD motor2(PWM_DIR, 9, 10);  // PWM = Pin 9, DIR = Pin 10.


// The setup routine runs once when you press reset.
void setup() {
  
}


// The loop routine runs over and over again forever.
void loop() {
  motor1.setSpeed(128);  // Run forward at 50% speed.
  motor2.setSpeed(128);
  delay(1000);
  
  motor1.setSpeed(255);  // Run forward at full speed.
  motor2.setSpeed(255);
  delay(1000);

  motor1.setSpeed(0);    // Stop.
  motor2.setSpeed(0);
  delay(1000);

  motor1.setSpeed(-128);  // Run backward at 50% speed.
  motor2.setSpeed(-128);
  delay(1000);
  
  motor1.setSpeed(-255);  // Run backward at full speed.
  motor2.setSpeed(-255);
  delay(1000);

  motor1.setSpeed(0);    // Stop.
  motor2.setSpeed(0); 
  delay(1000);
}
