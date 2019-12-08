//--------------------------------------------------------------------------
// Tania Morimoto and Allison Okamura, Stanford University
// 11.16.13
// Code to test basic Hapkit functionality (sensing and force output)
// Modified for 601105 @Hallym University
// test at 2019/11/12 at KAIST
//--------------------------------------------------------------------------
// Includes
#include <math.h>
#include <String.h>
#include <stdio.h>
// Pin declares
int pwmPin = 5; // PWM output pin for motor 1
int dirPin = 8; // direction output pin for motor 1
int sensorPosPin = A2; // input pin for MR sensor
int fsrPin = A3; // input pin for FSR sensor

// Position tracking variables
int updatedPos = 0;     // keeps track of the latest updated value of the MR sensor reading
int rawPos = 0;         // current raw reading from MR sensor
int lastRawPos = 0;     // last raw reading from MR sensor
int lastLastRawPos = 0; // last last raw reading from MR sensor
int flipNumber = 0;     // keeps track of the number of flips over the 180deg mark
int tempOffset = 0;
int rawDiff = 0;
int lastRawDiff = 0;
int rawOffset = 0;
int lastRawOffset = 0;
const int flipThresh = 700;  // threshold to determine whether or not a flip over the 180 degree mark occurred
boolean flipped = false;

// Kinematics variables
double xh = 0;           // position of the handle [m]
double lastXh = 0;     //last x position of the handle
double vh = 0;         //velocity of the handle
double lastVh = 0;     //last velocity of the handle
double lastLastVh = 0; //last last velocity of the handle

// Force output variables
double force = 0;           // force at the handle
double Tp = 0;              // torque of the motor pulley
double duty = 0;            // duty cylce (between 0 and 255)
unsigned int output = 0;    // output command to the motor

// render a VIRTUAL WALL
double x_wall;// 10 cm
int k_wall;
String temp="";     
// --------------------------------------------------------------
// Setup function -- NO NEED TO EDIT
// --------------------------------------------------------------
void setup() 
{
  // Set up serial communication
  Serial.begin(38400);
  
  // Set PWM frequency 
  setPwmFrequency(pwmPin,1); 
  
  // Input pins
  pinMode(sensorPosPin, INPUT); // set MR sensor pin to be an input
  pinMode(fsrPin, INPUT);       // set FSR sensor pin to be an input

  // Output pins
  pinMode(pwmPin, OUTPUT);  // PWM pin for motor A
  pinMode(dirPin, OUTPUT);  // dir pin for motor A
  
  // Initialize motor 
  analogWrite(pwmPin, 0);     // set to not be spinning (0/255)
  digitalWrite(dirPin, LOW);  // set direction
  
  // Initialize position valiables
  lastLastRawPos = analogRead(sensorPosPin);
  lastRawPos = analogRead(sensorPosPin);
}

// --------------------------------------------------------------
// Main Loop
// --------------------------------------------------------------
void loop()
{
  if (Serial.available() > 0) {
    temp = Serial.readString(); // 문자열을 읽어 들인다.
    k_wall = temp.toInt(); // 읽어온 문자열을 정수로 변환  
  }
  //*************************************************************
  //*** Section 1. Compute position in counts (do not change) ***  
  //*************************************************************

  // Get voltage output by MR sensor
  rawPos = analogRead(sensorPosPin);  //current raw position from MR sensor

  // Calculate differences between subsequent MR sensor readings
  rawDiff = rawPos - lastRawPos;          //difference btwn current raw position and last raw position
  lastRawDiff = rawPos - lastLastRawPos;  //difference btwn current raw position and last last raw position
  rawOffset = abs(rawDiff);
  lastRawOffset = abs(lastRawDiff);
  
  // Update position record-keeping vairables
  lastLastRawPos = lastRawPos;
  lastRawPos = rawPos;
  
  // Keep track of flips over 180 degrees
  if((lastRawOffset > flipThresh) && (!flipped)) { // enter this anytime the last offset is greater than the flip threshold AND it has not just flipped
    if(lastRawDiff > 0) {        // check to see which direction the drive wheel was turning
      flipNumber--;              // cw rotation 
    } else {                     // if(rawDiff < 0)
      flipNumber++;              // ccw rotation
    }
    if(rawOffset > flipThresh) { // check to see if the data was good and the most current offset is above the threshold
      updatedPos = rawPos + flipNumber*rawOffset; // update the pos value to account for flips over 180deg using the most current offset 
      tempOffset = rawOffset;
    } else {                     // in this case there was a blip in the data and we want to use lastactualOffset instead
      updatedPos = rawPos + flipNumber*lastRawOffset;  // update the pos value to account for any flips over 180deg using the LAST offset
      tempOffset = lastRawOffset;
    }
    flipped = true;            // set boolean so that the next time through the loop won't trigger a flip
  } else {                        // anytime no flip has occurred
    updatedPos = rawPos + flipNumber*tempOffset; // need to update pos based on what most recent offset is 
    flipped = false;
  }
 
  //*************************************************************
  //*** Section 2. Compute position in meters *******************
  //*************************************************************

  // ADD YOUR CODE HERE
  // Define kinematic parameters you may need
     double rh = 0.065659;   //[m] 
  // Step 2.1: print updatedPos via serial monitor
     //Serial.println(updatedPos);
  // Step 2.6: 
     double ts = -.0107*updatedPos + 4.9513; // Compute the angle of the sector pulley (ts) in degrees based on updatedPos
  // Step 2.7: 
     xh = rh*(ts*3.14159/180);       // Compute the position of the handle based on ts
  // Step 2.8: print xh via serial monitor
     //Serial.println(xh,5);
  // Lab 4 Step 2.3: compute handle velocity
     vh = -(.95*.95)*lastLastVh + 2*.95*lastVh + (1-.95)*(1-.95)*(xh-lastXh)/.0001;  // filtered velocity (2nd-order filter)
     lastXh = xh;
     lastLastVh = lastVh;
     lastVh = vh;

  //*************************************************************
  //*** Section 3. Assign a motor output force in Newtons *******  
  //*************************************************************
 
  // ADD YOUR CODE HERE
  // Define kinematic parameters you may need
     double rp = 0.004191;   //[m]
     double rs = 0.073152;   //[m]  
  // Step 3.1: 
     //force = -0.5; // In lab 3, you will generate a force by simply assigning this to a constant number (in Newtons)
  // Lab 4 Step 1.4: render a VIRTUAL SPRING
     //double k_spring = 30; //[N/m]
     //force = -k_spring*xh;
  // Lab 4 Step 2.4: render a VIRTUAL DAMPER
     //double b_damper = 0.35; 
     //force = -b_damper*vh;
  // Lab 4 Step 3.3: render a VIRTUAL TEXTURE using the damping approach (there is a more clever way to do this)
//     double w = .005;  //width of damping area
//     double b_damper = 0.5;
//     for(int i=0; i<9; i=i+2){
//       if((abs(xh)>i*w)&&(abs(xh)<(i+1)*w)){
//         force = -b_damper*vh;
//       } else if((abs(xh)>(i+1)*w)&&(abs(xh)<(i+2)*w)){
//         force = 0;
//       }
//     }
  // render a VIRTUAL WALL
     x_wall = 0.01;// 10 cm
     // k_wall = 400;
     if(xh>x_wall) {
       force = -k_wall*(xh-x_wall);
     } else {
       force = 0;
     }
  // Step 3.2: 
     Tp = rp/rs * rh * force;    // Compute the require motor pulley torque (Tp) to generate that force

  //*************************************************************
  //*** Section 5. Force output (do not change) *****************
  //*************************************************************
  
  // Determine correct direction for motor torque
  if(force < 0) { 
    digitalWrite(dirPin, HIGH);
  } else {
    digitalWrite(dirPin, LOW);
  }

  // Compute the duty cycle required to generate Tp (torque at the motor pulley)
  duty = sqrt(abs(Tp)/0.03);

  // Make sure the duty cycle is between 0 and 100%
  if (duty > 1) {            
    duty = 1;
  } else if (duty < 0) { 
    duty = 0;
  }  
  // Output
  int sensor_1 = rawPos;        
  Serial.write("a"); // 각 값들을 구별하기 위한 문자 
  Serial.write(lowByte(sensor_1));  
  Serial.write(highByte(sensor_1)); 
 
  int sensor_2 = xh*100; // 실수형의 값을 정수형으로 바꾸어 저장 한다.     
  Serial.write("b");
  Serial.write(lowByte(sensor_2));  
  Serial.write(highByte(sensor_2)); 
  int sensor_3 = duty*100;  // 실수형의 값을 정수형으로 바꾸어 저장 한다.        
  Serial.write("c"); 
  Serial.write(lowByte(sensor_3));  
  Serial.write(highByte(sensor_3));
  // int sensor_4 = k_wall;  
  Serial.write("d"); 
  Serial.write(lowByte(k_wall));  
  Serial.write(highByte(k_wall));  

  output = (int)(duty* 255);   // convert duty cycle to output signal
  analogWrite(pwmPin,output);  // output the signal
}

// --------------------------------------------------------------
// Function to set PWM Freq -- DO NOT EDIT
// --------------------------------------------------------------
void setPwmFrequency(int pin, int divisor) {
  byte mode;
  if(pin == 5 || pin == 6 || pin == 9 || pin == 10) {
    switch(divisor) {
      case 1: mode = 0x01; break;
      case 8: mode = 0x02; break;
      case 64: mode = 0x03; break;
      case 256: mode = 0x04; break;
      case 1024: mode = 0x05; break;
      default: return;
    }
    if(pin == 5 || pin == 6) {
      TCCR0B = TCCR0B & 0b11111000 | mode;
    } else {
      TCCR1B = TCCR1B & 0b11111000 | mode;
    }
  } else if(pin == 3 || pin == 11) {
    switch(divisor) {
      case 1: mode = 0x01; break;
      case 8: mode = 0x02; break;
      case 32: mode = 0x03; break;
      case 64: mode = 0x04; break;
      case 128: mode = 0x05; break;
      case 256: mode = 0x06; break;
      case 1024: mode = 0x7; break;
      default: return;
    }
    TCCR2B = TCCR2B & 0b11111000 | mode;
  }
}
