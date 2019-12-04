#include <OneWire.h>
#include <Adafruit_NeoPixel.h>              // 네오픽셀 라이브러리를 불러옵니다.
#define PIN 3                                         // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 1                                // 연결된 네오픽셀의 숫자입력
int DS18S20_Pin = 2,btn=0,sp=150;                             //온도센서를 2번 핀으로 연결
 float temperature,temp=200;
 int motorA=4;
 int motorB=5;
 int FSR = A4; 
 int a=0;
OneWire ds(DS18S20_Pin);                         //2번 핀과 연결되 OneWire 객체 생성
 Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);
 Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(1, 4, NEO_GRB + NEO_KHZ800);
void setup(){
  strip.begin();                                       // 네오픽셀 제어시작
  Serial.begin(9600);                           // 시리얼 통신, 속도는 9600
  pinMode(6, OUTPUT); // 릴레이 사용 
  pinMode(13, INPUT); // 버튼 사용 
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
} 
 
void loop(){
  int ap=analogRead(FSR);
    Serial.println(ap);
   a = analogRead(A1);      // 수위 센서(오일 잔량 체크)  
  Serial.println(a);                   // 잔여량 출력
  if(a<=200){
    strip.setPixelColor(0, 255,0,0);
     strip.show();
  }else if(a<=400){
    strip.setPixelColor(0, 0,255,255);
     strip.show();
  }else if(a<=700){
    strip.setPixelColor(0,0,0,255);
     strip.show();
  }
   strip.show();
  if(ap==3){
    btn=0;
  }
  if(ap>=100){
    btn=btn+1;
  }
  Serial.println(btn);
   strip.setPixelColor(0, 0,0,255);           // (A,R,G,B) A번째 LED를 RGB (0~255) 만큼의 밝기로 켭니다.  (0부터 첫 번째 네오픽셀 시작)
   for(int r=0;r<=255;r++){
    for(int g=0;g<=255;g++){
     for(int b=0;b<=255;b++){
       strip2.setPixelColor(0, r,g,b);
       strip2.show();
   }  
   }   
   }
  
  digitalWrite(6, HIGH);
  temperature = getTemp();                 //온도 측정 후 변수에 저장
  if(btn==0){
   temp=30;
   analogWrite(motorA, 0);
   analogWrite(motorB, 150);
   Serial.println("모드 : 중");
  }else if(btn==1){
   temp=50;
     analogWrite(motorA, 0);
   analogWrite(motorB, 250);
   Serial.println("모드 : 강");
  }else if(btn==2){
   temp=10;
    analogWrite(motorA, 0);
   analogWrite(motorB, 0);
   Serial.println("모드 : 약");
   
  }
  if(temperature >= temp){
  digitalWrite(6, LOW);
  //Serial.println(digitalRead(10));
}
Serial.println(temperature);
}
float getTemp(){                                   //온도 측정 후 반환하는 함수
 byte data[12];
 byte addr[8];
 if ( !ds.search(addr)) {
   ds.reset_search();
   return -1000;
 }
 if ( OneWire::crc8( addr, 7) != addr[7]) {
   Serial.println("CRC is not valid!");
   return -1000;
 }
 if ( addr[0] != 0x10 && addr[0] != 0x28) {
   Serial.print("Device is not recognized");
   return -1000;
 }
 ds.reset();
 ds.select(addr);
 ds.write(0x44,1);                                   
 byte present = ds.reset();
 ds.select(addr);  
 ds.write(0xBE); 
 
 for (int i = 0; i < 9; i++) { 
  data[i] = ds.read();                                                          
 }
 
 ds.reset_search(); 
 byte MSB = data[1];
 byte LSB = data[0];
 float tempRead = ((MSB << 8) | LSB); 
 float TemperatureSum = tempRead / 16; 
 return TemperatureSum;                                                                    
}
