#define PIN_TOPLEFT 2
#define PIN_MIDLEFT 3
#define PIN_BOTLEFT 4
#define PIN_TOPRIGHT 5
#define PIN_MIDRIGHT 6
#define PIN_BOTRIGHT 7
#define digitalPin 13

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(PIN_TOPLEFT, OUTPUT);
pinMode(PIN_MIDLEFT, OUTPUT);
pinMode(PIN_BOTLEFT, OUTPUT);
pinMode(PIN_TOPRIGHT, OUTPUT);
pinMode(PIN_MIDRIGHT, OUTPUT);
pinMode(PIN_BOTRIGHT, OUTPUT);
pinMode(digitalPin,INPUT);
}

void loop() {
 
  // put your main code here, to run repeatedly:
//스위치가 on될때마다 한글자씩 표현
while (Serial.available()&&(digitalRead(digitalPin)==HIGH )) {
int ch[4]={0,0,0,0};
int i;
for(i=0;i<3;i++){
ch[i]= Serial.read();
ch[3]=<<ch[0]<<1;
if(ch[0]==32)//띄어쓰기 공백 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);
  return NULL;
}
//Serial.println("!!!");
//Serial.println(ch[i]);
}

if(ch[0]==227&&ch[1]==132&&ch[2]==177)//'ㄱ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);
Serial.println(ch[0]+ch[1]+ch[2]);

}

if(ch[0]==227&&ch[1]==132&&ch[2]==180)//'ㄴ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);

}
if(ch[0]==227&&ch[1]==132&&ch[2]==183)//'ㄷ'에 대한 점자
{


  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}
if(ch[0]==227&&ch[1]==132&&ch[2]==185)//'ㄹ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);

}
if(ch[0]==227&&ch[1]==133&&ch[2]==129)//'ㅁ'에 대한 점자
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);

}
if(ch[0]==227&&ch[1]==133&&ch[2]==130)//'ㅂ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);



}
if(ch[0]==227&&ch[1]==133&&ch[2]==133)//'ㅅ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==135)//받침'ㅇ'에 대한 점자
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);

}
if(ch[0]==227&&ch[1]==133&&ch[2]==136)//'ㅈ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==138)//'ㅊ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==139)//'ㅋ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==140)//'ㅌ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==141)//'ㅍ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==142)//'ㅎ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==143)//'ㅏ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}
if(ch[0]==227&&ch[1]==133&&ch[2]==145)//'ㅑ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==147)//'ㅓ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==149)//'ㅕ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==151)//'ㅗ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==155)//'ㅛ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==156)//'ㅜ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==160)//'ㅠ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==161)//'ㅡ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==163)//'ㅣ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==144)//'ㅐ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==146)//'ㅒ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==148)//'ㅔ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==150)//'ㅖ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==152)//'ㅘ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==153)//'ㅙ'에 대한 점자
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==154)//'ㅚ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==157)//'ㅝ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==158)//'ㅞ'에 대한 점자
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==159)//'ㅟ'에 대한 점자
{

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(500);


}

if(ch[0]==227&&ch[1]==133&&ch[2]==162)//'ㅢ'에 대한 점자
{

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);


}


}

}
