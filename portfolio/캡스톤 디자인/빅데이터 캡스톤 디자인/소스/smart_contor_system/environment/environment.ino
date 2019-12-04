#include <NMEAGPS.h>//GPS
#include <GPSport.h> //GPS
#include <MsTimer2.h>
#include "DHT.h" // 온습도 센서 라이브러리 
#include "MQ7.h" // 일산화탄소  센서 라이브러리
#include <SoftwareSerial.h> // 소프트웨어 시리얼 사용을 위한 라이브러리 //wifi,....

int dustPin = A0;
float dustVal = 0;
float dustDensity = 0; // 미세먼지 변수 (mg/m3)
float dustDensityug=0; // 미세먼지 변수 [ug/m3]
float voMeasured = 0;
float calcVoltage = 0;

int ledPower = 10;
int delayTime = 280;
int delayTime2 = 40;
float offTime = 9680;
const int dhtPin = 3; // DHT22 온습도 센서 핀번호 !!
String apiKey = "CLLBZAEOFVV3YJRG"; //  thingspeak apikey 값 자신의 key를 적어주자!

float humidity , temperature ,co ,percentage ; // 온습도 센서 변수들...
/* humidity =습도 변수  , temperature = 온도 변수 ,co = 일산화탄소 변수 ,percentage = 이산화탄소 변수 */
DHT dht(dhtPin, DHT22); // DHT22 온습도 센서 객체 생성
MQ7 mq7(A7,5.0); // 일산화 탄소 센서 객체 생성 
SoftwareSerial esp8266(13,12); // RX/TX 설정, serial 객체생성
//=================co2 sansor =-==============
#define MG_PIN (1) //define which analog input channel you are going to use – A0 pin
#define BOOL_PIN (9)    // D9 – Dout pin
#define DC_GAIN (8.5) //define the DC gain of amplifier
/***********************Software Related Macros************************************/

#define READ_SAMPLE_INTERVAL (50) //define how many samples you are going to take in normal operation
#define READ_SAMPLE_TIMES (5) //define the time interval(in milisecond) between each samples in
//normal operation
/**********************Application Related Macros**********************************/

//These two values differ from sensor to sensor. user should derermine this value.
#define ZERO_POINT_VOLTAGE (0.025) //define the output of the sensor in volts when the concentration of CO2 is 400PPM
#define REACTION_VOLTGAE (0.010) //define the voltage drop of the sensor when move the sensor from air into 1000ppm CO2
/*****************************Globals***********************************************/

float CO2Curve[3] = {2.602,ZERO_POINT_VOLTAGE,(REACTION_VOLTGAE/(2.602-3))};
//two points are taken from the curve.
//with these two points, a line is formed which is
//"approximately equivalent" to the original curve.
//data format:{ x, y, slope}; point1: (lg400, 0.324), point2: (lg4000, 0.280)
//slope = ( reaction voltage ) / (log400 –log1000)
//=================co2 sansor =-==============

//============================= gps ==========================

//--------------------latitude,longitude--------------------
NMEAGPS  gps; // This parses the GPS characters
gps_fix  fix; // This holds on to the latest values
//--------------------latitude,longitude--------------------

//----------------TIME--------------------------------
//static NMEAGPS  gps; // This parses received characters
//static gps_fix  fix; // This contains all the parsed pieces

//--------------------------
// CHECK CONFIGURATION

#if !defined(GPS_FIX_TIME) | !defined(GPS_FIX_DATE)
  #error You must define GPS_FIX_TIME and DATE in GPSfix_cfg.h!
#endif

#if !defined(NMEAGPS_PARSE_RMC) & !defined(NMEAGPS_PARSE_ZDA)
  #error You must define NMEAGPS_PARSE_RMC or ZDA in NMEAGPS_cfg.h!
#endif

//#include <GPSport.h>

//--------------------------
// Set these values to the offset of your timezone from GMT

static const int32_t          zone_hours   =  9L; // EST
static const int32_t          zone_minutes =  0L; // usually zero
static const NeoGPS::clock_t  zone_offset  =
                                zone_hours   * NeoGPS::SECONDS_PER_HOUR +
                                zone_minutes * NeoGPS::SECONDS_PER_MINUTE;

// Uncomment one DST changeover rule, or define your own:
#define USA_DST
//#define EU_DST

#if defined(USA_DST)
  static const uint8_t springMonth =  3;
  static const uint8_t springDate  = 14; // latest 2nd Sunday
  static const uint8_t springHour  =  2;
  static const uint8_t fallMonth   = 11;
  static const uint8_t fallDate    =  7; // latest 1st Sunday
  static const uint8_t fallHour    =  2;
  #define CALCULATE_DST

#elif defined(EU_DST)
  static const uint8_t springMonth =  3;
  static const uint8_t springDate  = 31; // latest last Sunday
  static const uint8_t springHour  =  1;
  static const uint8_t fallMonth   = 10;
  static const uint8_t fallDate    = 31; // latest last Sunday
  static const uint8_t fallHour    =  1;
  #define CALCULATE_DST
#endif

//--------------------------

void adjustTime( NeoGPS::time_t & dt )
{
  NeoGPS::clock_t seconds = dt; // convert date/time structure to seconds

  #ifdef CALCULATE_DST
    //  Calculate DST changeover times once per reset and year!
    static NeoGPS::time_t  changeover;
    static NeoGPS::clock_t springForward, fallBack;

    if ((springForward == 0) || (changeover.year != dt.year)) {

      //  Calculate the spring changeover time (seconds)
      changeover.year    = dt.year;
      changeover.month   = springMonth;
      changeover.date    = springDate;
      changeover.hours   = springHour;
      changeover.minutes = 0;
      changeover.seconds = 0;
      changeover.set_day();
      // Step back to a Sunday, if day != SUNDAY
      changeover.date -= (changeover.day - NeoGPS::time_t::SUNDAY);
      springForward = (NeoGPS::clock_t) changeover;

      //  Calculate the fall changeover time (seconds)
      changeover.month   = fallMonth;
      changeover.date    = fallDate;
      changeover.hours   = fallHour -1; // to account for the "apparent" DST +1
      changeover.set_day();
      // Step back to a Sunday, if day != SUNDAY
      changeover.date -= (changeover.day - NeoGPS::time_t::SUNDAY);
      fallBack = (NeoGPS::clock_t) changeover;
    }
  #endif

  //  First, offset from UTC to the local timezone
  seconds += zone_offset;

  #ifdef CALCULATE_DST
    //  Then add an hour if DST is in effect
    if ((springForward <= seconds) && (seconds < fallBack))
      seconds += NeoGPS::SECONDS_PER_HOUR;
  #endif

  dt = seconds; // convert seconds back to a date/time structure

} // adjustTime

//--------------------------

static void GPSloop()
{  
  while (gps.available( gpsPort )) {
    fix = gps.read();
    // Display the local time

    if (fix.valid.time && fix.valid.date) {
      adjustTime( fix.dateTime );

      DEBUG_PORT << fix.dateTime;
    }
    DEBUG_PORT.println();
    
  }

} // GPSloop

//--------------------------

#ifdef NMEAGPS_INTERRUPT_PROCESSING
  static void GPSisr( uint8_t c )
  {
    gps.handle( c );
  }
#endif
//====================================gps end=========================
void setup(){  // setup roop!
    //====================================gps set=========================
  DEBUG_PORT.begin(9600);
  while (!Serial);
  DEBUG_PORT.print( F("NMEAsimple.INO: started\n") );
  gpsPort.begin(9600);
  //------------------------TIME SET-----------------------

    DEBUG_PORT.begin(9600);
  while (!DEBUG_PORT)
    ;

  DEBUG_PORT.print( F("NMEAtimezone.INO: started\n") );
  DEBUG_PORT.println( F("Looking for GPS device on " GPS_PORT_NAME ) );
  DEBUG_PORT.println( F("Local time") );
  DEBUG_PORT.flush();
  
  gpsPort.begin( 9600 );
  #ifdef NMEAGPS_INTERRUPT_PROCESSING
    gpsPort.attachInterrupt( GPSisr );
  #endif
  //======================TIME SET End =============
  
  Serial.begin(9600);
  pinMode(ledPower,OUTPUT);
  pinMode(4, OUTPUT);
  //=================co2 sansor =-==============
pinMode(BOOL_PIN, INPUT); //set pin to input
digitalWrite(BOOL_PIN, HIGH); //turn on pullup resistors
Serial.print("MG-811 Demostration\n");
  //=================co2 sansor =-==============
  //=======================DHT22===================
  dht.begin(); 
  //===========================================
  //====================wifi=====================
   esp8266.begin(9600);        //소프트웨어 시리얼 시작
  while (!esp8266) { }
  delay(1000);
  esp8266.println("AT+RST");  //ESP8266 Reset
  //if(esp8266.find("OK") ) Serial.println("Module Reset");
  if (waitForResponse("OK\r\n",3000))
  {
    Serial.println("Module Reset");
  } else {
    Serial.println("Module Reset Failed");
  }
  delay(1000);
  connectWifi();
  //==============wifi end===================
  MsTimer2::set(10000,total); // 10000ms period
  MsTimer2::start();
delay(1000);
}
//============loop 문====================
void loop(){ // main loop !!
  Serial.println("현재 시간을 가져옵니다. ");
 GPSloop();
   Serial.println("현재 위도,경도 를 가져옵니다. ");
 gpsLocation();
delay(500);
}
//============loop 문 end ====================
//=================co2 sansor =-==============
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
//=================co2 sansor =-==============
//==================wifi modul=================
String ssid ="Dr.Will";
String password="00941129";
void connectWifi() {
   String cmd = "AT+CWJAP=\"" +ssid+"\",\"" + password + "\"";
 
  Serial.println(cmd);
  esp8266.println(cmd);

  delay(4000);
  if (waitForResponse("OK\r\n",3000))
  {
    Serial.println("Connected to wifi!");
  } else {
    Serial.println("Cannot connect to wifi!");
  }
  /*if(esp8266.find("OK")) {
    Serial.println("Connected!");
  }
  else {
    connectWifi();
    Serial.println("Cannot connect to wifi"); 
  }*/
}


boolean waitForResponse(String target, unsigned long timeout)
{
  unsigned long startTime = millis();
  String responseBuffer;
  char charIn;
  
  //keep checking for ESP response until timeout expires
  while ((millis() - startTime) < timeout)
  {
    if (esp8266.available())
    {
      charIn = esp8266.read();
      responseBuffer += charIn;
    }
    if (responseBuffer.endsWith(target))
    {
      return 1; //true
    }
  }
  if (!responseBuffer.endsWith(target))
  {
    Serial.println(responseBuffer);
    return 0; //false
  }
}
//===================wifi end==================
void dust(){ // 미세먼지 센서 함수
    // ledPower is any digital pin on the arduino connected to Pin 3 on the sensor
  digitalWrite(ledPower, LOW); // power on the LED
  delayMicroseconds(delayTime);

  dustVal=analogRead(dustPin); // read the dust value via pin 5 on the sensor
  calcVoltage = dustVal * (5.0 / 1024); 
  
  delayMicroseconds(delayTime2);

  digitalWrite(ledPower, HIGH); // turn the LED off
  delayMicroseconds(offTime);

  delay(500);  

  dustDensity = 0.17*(dustVal*0.0049)-0.1;  
  Serial.print("Dust density(mg/m3) = ");
  Serial.print(abs(dustDensity));
  Serial.print(" // ");

   dustDensityug = (0.17 * calcVoltage - 0.1)*1000; 
  Serial.print("Dust Density [ug/m3]: ");
  Serial.println(abs(dustDensityug));
}
void co2(){// 이산화탄소 센서 함수
//=================co2 sansor roop =-==============
int percentage;
float volts;
volts = MGRead(MG_PIN);
Serial.print( "SEN-00007:" );
Serial.print(volts);
Serial.print( " V / before_amp : " );
Serial.print(volts/DC_GAIN);
Serial.print( " V " );
percentage = MGGetPercentage(volts,CO2Curve);
Serial.print("CO2:");
if (percentage == -1) {
Serial.print( "<400" );
} else {
Serial.print(percentage);
}
Serial.print( "ppm\n" );
if (digitalRead(BOOL_PIN) ){
Serial.print( "=====BOOL is HIGH======" );
} else {
Serial.print( "=====BOOL is LOW======" );
}
Serial.print("\n");
delay(200);
//=================co2 sansor roop ==============
}
void gpsLocation(){ //GPS 함수
  while (gps.available( gpsPort )) {
    fix = gps.read();

    DEBUG_PORT.print( F("Location: ") );
    if (fix.valid.location) {
      DEBUG_PORT.print( fix.latitude(), 6 );
      DEBUG_PORT.print( ',' );
      DEBUG_PORT.print( fix.longitude(), 6 );
    }

    DEBUG_PORT.print( F(", Altitude: ") );
    if (fix.valid.altitude)
      DEBUG_PORT.print( fix.altitude() );

    DEBUG_PORT.println();
  }
}
void dht22(){ //온습도 센서 함수 
   delay(2000);
 humidity =  dht.readHumidity();
 temperature = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print("\t");
  Serial.print(humidity, 1);
  Serial.print("\t\t");
  Serial.print("Temperature: ");
  Serial.print("\t\t");
  Serial.println(temperature);
}
void CO(){ // 일산화 탄소 함수
  co=mq7.getPPM();
  Serial.print("CO : ");
Serial.println(co);
}
void http(){
// String 변환
  char humidity_buffer[16];
  String strHumi = dtostrf(humidity, 4, 1, humidity_buffer);
  char temperature_buffer[16];
  String strTemp = dtostrf(temperature, 4, 1, temperature_buffer);
  // TCP 연결
  String cmd = "AT+CIPSTART=\"TCP\",\"";
  cmd += "184.106.153.149"; // api.thingspeak.com 접속 IP
  cmd += "\",80";           // api.thingspeak.com 접속 포트, 80
  esp8266.println(cmd);
  if(esp8266.find("Error")){
    Serial.println("AT+CIPSTART error");
    return;
  }
  
    // prepare GET string
  String getStr = "GET /update?api_key=";
  getStr += apiKey;
  getStr +="&field1=";
  getStr += String(dustDensityug); // 미세먼지
  getStr +="&field2=";
  getStr += String(percentage); // 이산화탄소 
  getStr +="&field3=";
  getStr += String(strTemp); // 온습도
    getStr +="&field4=";
  getStr += String(co); // 일산화탄소 
  getStr += "\r\n\r\n";

  // send data length
  cmd = "AT+CIPSEND=";
  cmd += String(getStr.length());
  esp8266.println(cmd);
 Serial.println(cmd);
  if(esp8266.find(">")){
    esp8266.print(getStr);
    Serial.println(getStr);
    Serial.println("DataSended!");
  }
  else{
    esp8266.println("AT+CIPCLOSE");
    // alert user
    Serial.println("AT+CIPCLOSE");
  }
  // thingspeak needs 15 sec delay between updates
  delay(16000);
}
int count=0;
void total(){
    Serial.println("dust() = 미세먼지 농도 ");
 dust(); //미세먼지 
  Serial.println("co2() = 이산화탄소 농도 ");
 co2();// 이산화탄소 
  Serial.println("dht22() = 온습도  ");
 dht22();// 온습도 센서
   Serial.println("co() = 일산화탄소  ");
 CO(); // 일산화탄소 
 if(count == 6){
   http();// wifi 통신 함수 
   count=0;
 }
 count++;
}
