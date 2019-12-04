int cnt1 =0;
String str;
// 변수 선언 
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);// 통신 속도 설정 
}
void loop() {
  // put your main code here, to run repeatedly:
  char buf[255]; // 문자 배열 
  sprintf(buf,"%d",cnt1);
   Serial.println(buf);
   cnt1++;
   delay(1000);
}
