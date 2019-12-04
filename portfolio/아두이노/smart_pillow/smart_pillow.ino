#include <SoftwareSerial.h> //  
#include <Wire.h>
#include <MsTimer2.h>
#include "pitches.h"
SoftwareSerial bt(3, 4);   //bluetooth module Tx:Digital 3 Rx:Digital 2
#include "MAX30100_PulseOximeter.h"
#define REPORTING_PERIOD_MS     1000
PulseOximeter pox;
uint32_t tsLastReport = 0;
int co2_v1,co2_v2,sleep=0,count=0,spcont=0, out=-1;
int percentage,percentage_1;
void onBeatDetected(){Serial.println("Beat!");}
/*co2 sansor 부분 입니다. */
#define MG_PIN (A0) //define which analog input channel you are going to use – A0 pin
#define BOOL_PIN (9)    // D9 – Dout pin
/*2번쨰 co2센서 */
#define MG_PIN_1 (A2) //define which analog input channel you are going to use – A1 pin
#define BOOL_PIN_1 (6)    // D8 – Dout pin 

#define DC_GAIN (8.5) //define the DC gain of amplifier
/***********************Software Related Macros************************************/
#define READ_SAMPLE_INTERVAL (50) //define how many samples you are going to take in normal operation
#define READ_SAMPLE_TIMES (5) //define the time interval(in milisecond) between each samples in
//normal operation
/**********************Application Related Macros**********************************/
//These two values differ from sensor to sensor. user should derermine this value.
#define ZERO_POINT_VOLTAGE (0.10) //define the output of the sensor in volts wheY                                                         n the concentration of CO2 is 400PPM
#define REACTION_VOLTGAE (0.30) //define the voltage drop of the sensor when move the sensor from air into 1000ppm CO2
/*2번쨰 co2센서 */
#define ZERO_POINT_VOLTAGEA (0.10) //define the output of the sensor in volts wheY                                                         n the concentration of CO2 is 400PPM
#define REACTION_VOLTGAEA (0.30) //define the voltage drop of the sensor when move the sensor from air into 1000ppm CO2
/*****************************Globals***********************************************/
float CO2Curve[3] = {2.602,ZERO_POINT_VOLTAGE,(REACTION_VOLTGAE/(2.602-3))};
float CO2Curvea[3] = { 2.602,ZERO_POINT_VOLTAGEA,(REACTION_VOLTGAEA/(2.602-3)) };
//two points are taken from the curve.
//with these two points, a line is formed which is
//"approximately equivalent" to the original curve.
//data format:{ x, y, slope}; point1: (lg400, 0.324), point2: (lg4000, 0.280)
//slope = ( reaction voltage ) / (log400 –log1000)

void setup(){
    Serial.begin(115200);
    pinMode(12, INPUT);
    Serial.print("Initializing pulse oximeter..");

    // Initialize the PulseOximeter instance
    // Failures are generally due to an improper I2C wiring, missing power supply
    // or wrong target chip
    if (!pox.begin()) {
        Serial.println("FAILED");
    } else {
        Serial.println("SUCCESS");
    }

    // The default current for the IR LED is 50mA and it could be changed
    //   by uncommenting the following line. Check MAX30100_Registers.h for all the
    //   available options.
    // pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);

    // Register a callback for the beat detection
   pox.setOnBeatDetectedCallback(onBeatDetected);

     /*co2 sansor setup 부 입니다. */
     
pinMode(BOOL_PIN, INPUT); //set pin to input
digitalWrite(BOOL_PIN, HIGH); //turn on pullup resistors
pinMode(BOOL_PIN_1, INPUT); //set pin to input
digitalWrite(BOOL_PIN_1, HIGH); //turn on pullup resistors
//Serial.print("MG-811 Demostration\n");

MsTimer2::set(1000,co2sub); // 10000ms period
  MsTimer2::start();
}
void loop(){
  /*
  Hr=pox.getHeartRate();
    // Make sure to call update as fast as possible
    pox.update();
    // Asynchronously dump heart rate and oxidation levels to the serial
    // For both, a value of 0 means "invalid"
       /if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
        Serial.print("Heart rate:");
        Serial.print(pox.getHeartRate());
        Serial.print("bpm / SpO2:");
        Serial.print(pox.getSpO2());
        Serial.println("%");
        tsLastReport = millis();
    }  */
     co2air();
     co2user();
  Serial.print("sub : "); 
  Serial.println(abs(co2_v1-co2_v2));  
  if(out == 0 ){
   bt.write("1\n");
   Serial.println(out);
   sound();
   out = 1;
  }
  delay(500);
    }
float MGRead(int mg_pin){
int i;
float v=0;
for (i=0;i<READ_SAMPLE_TIMES;i++) {
v += analogRead(mg_pin);
delay(READ_SAMPLE_INTERVAL);
}
v = (v/READ_SAMPLE_TIMES) *5/1024 ;
return v;
}
int MGGetPercentage(float volts, float *pcurve){
if ((volts/DC_GAIN )>=ZERO_POINT_VOLTAGE) {
return -1;
} else {
return pow(10, ((volts/DC_GAIN)-pcurve[1])/pcurve[2]+pcurve[0]);
}
}
void co2air(){
  //  Serial.println("============co2================");
float volts ;
volts = MGRead(MG_PIN);
    /*co2 센서 입니다.*/

//Serial.print( "SEN-00007:" );
//Serial.print(volts);
//Serial.print( " V / before_amp : " );
//Serial.print(volts/DC_GAIN);
//Serial.print( " V " );
percentage = MGGetPercentage(volts,CO2Curve);
//Serial.print("CO2:");
if (percentage == -1) {
//Serial.print( "<400" );
//Serial.print(percentage);
} else {
//Serial.print(percentage);
}
//Serial.print( "ppm\n" );
if (digitalRead(BOOL_PIN) ){
//Serial.println( "=====BOOL is HIGH======" );
} else {
//Serial.println( "=====BOOL is LOW======" );
}
co2_v1=percentage;
}
void co2user() {
  float volts_1;
 // Serial.println("============co2_2================");
  volts_1 = MGRead(MG_PIN_1);
//Serial.print(volts_1);
//Serial.print( " V / before_amp : " );
//Serial.print(volts_1/DC_GAIN);
//Serial.print( " V " );
percentage_1 = MGGetPercentage(volts_1,CO2Curvea);

//Serial.print("CO2:");
if (percentage == -1) {
//Serial.print( "<400" );
 co2_v2=-0;
//Serial.print(percentage_1 );
} else {
//Serial.print(percentage_1);
}
//Serial.print( "ppm\n" );
if (digitalRead(BOOL_PIN_1) ){
//Serial.print( "=====BOOL is HIGH======" );
} else {
//Serial.print( "=====BOOL is LOW======" );
}
Serial.print("\n");
if(percentage_1 == -1){
 co2_v2=-0; 
}else{
  co2_v2=percentage_1;
}
}
void co2sub(){
  //  Serial.println("============co2sub================");
  count++;//co2sub 함수의 실행 횟수 카운트 
     Serial.print("실행횟수  :=:  ");
     Serial.println(count); 
  if(abs(co2_v1-co2_v2) <=0 || abs(co2_v1-co2_v2) <=50){
    sleep++; // 무호흡 중으로 판단.
     Serial.print("무호흡  :=:  ");
     Serial.println(sleep); 
  }else{
    sleep=0;   
  }
 if(sleep >=10 &&count >=10){
  spcont++;
  bt.write("1\n");
   sound();
  Serial.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"); 
  out=0;
 }
 if(spcont>= 5 || spcont> 15){
  spcont++;
  bt.write("1\n");
  // sound();
  Serial.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"); 
  //out=0;
 }else if( spcont>= 15 || spcont> 30 ){
  spcont++;
  bt.write("1\n");
  // sound();
  Serial.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"); 
  out=0;
 }else{
  spcont++;
  bt.write("1\n");
   //sound();
  Serial.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"); 
//out=0;
 }
  
}

void sound(){
      for(int i=0;i<50;i++){
     for(int freq = 150; freq <=1800; freq = freq + 2) {
    tone(12, freq, 10);
  }
  for(int freq = 1800; freq <=150; freq = freq - 2) {
   tone(12, freq, 10);
  }
    }
}

