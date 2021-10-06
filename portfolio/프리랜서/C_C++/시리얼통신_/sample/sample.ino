#include <String.h>
char ch;
char ch2='ㅇ';
String temp="";  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(12, OUTPUT);
}
void loop() {
  //digitalWrite(12, HIGH);
 if (Serial.available() > 0) {
 /// digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    //temp = Serial.readString(); // 문자열을 읽어 들인다.
    ch = Serial.read(); // 문자열을 읽어 들인다.
    //k_wall = temp.toInt(); // 읽어온 문자열을 정수로 변환
    Serial.print(ch);  
  }
}
