//  The program responsible for controlling how
//  the motion activated turret is going to work.
//
//  For my water gun, I needed three relays due to
//  the water gun being able to swivel left and 
//  right. If the gun being used has fewer switches.
//  the other relays on this code could be commented 
//  out.
//  
//  By Jason Poel Smith
//  Modified by Faisal Mir, 2019-12-07
//
int relayOne = 2;           // Relay connected to digital pin 2 
int relayTwo = 5;           // Relay connected to digital pin 4
int relayThree = 6;         // Relay connected to digital pin 6 
int motionSensorPin = 13;   // Motion Sensor connected to digital pin 13 
int motionSensorState = 0; 

void setup() 
{ 
  pinMode(relayOne, OUTPUT);       // sets the digital pin 2 as output
  pinMode(relayTwo, OUTPUT);       // sets the digital pin 4 as output 
  pinMode(relayThree, OUTPUT);     // se9ts the digital pin 6 as output 
  pinMode(motionSensorPin, INPUT); // sets the digital pin 13 as input
  
  Serial.begin(9600);
}
void loop() 
{
  motionSensorState = digitalRead(motionSensorPin); //read output of motion sensor
  if (motionSensorState == HIGH) // if motion is detected, fire gun
  { 
    digitalWrite(relayTwo, HIGH); // turns the second relay on to fire the gun 
    delay(1000); digitalWrite(relayOne, HIGH); // turns the first relay on to turn the turret 
    delay(150); digitalWrite(relayOne, LOW); // turns the first relay off
    delay(500); digitalWrite(relayThree, HIGH); // turns the third relay on to turn the turret back 
    delay(300); digitalWrite(relayThree, LOW); // turns the third relay off 
    delay(500); digitalWrite(relayOne, HIGH); // turns the first relay on to turn the turret 
    delay(300); digitalWrite(relayOne, LOW); // turns the first relay off 
    delay(500); digitalWrite(relayThree, HIGH); // turns the third relay on to turn the turret back 
    delay(300); digitalWrite(relayThree, LOW); // turns the third relay off 
    delay(500); digitalWrite(relayTwo, LOW); // turns the second relay off to stop firing the gun 
    digitalWrite(relayOne, HIGH); // turns the first relay on to turn the turret all the way to one side 
    delay(700); digitalWrite(relayOne, LOW); // turns the first relay off
    delay(500); digitalWrite(relayThree, HIGH); // turns the third relay on to turn the turret back to the center position
    delay(375); digitalWrite(relayThree, LOW); // turns the third relay off 
    delay(1000); 
  } 
  else              // if no motion is detected, default to setting all motors off
  { 
    digitalWrite(relayOne, LOW); 
    digitalWrite(relayTwo, LOW); 
    digitalWrite(relayThree, LOW); 
  }
 }
