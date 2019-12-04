int r = 3; // Red LED 포트번호 
int b = 6; // blue LED 포트번호 
int y = 11; // yellow LED 포트번호
int red=0,blue=0,yellow=0; //
int cd=0 , bt=0,flag=0,dy=3; // cd = 조도센서 변수 입니다. bt= 버튼의 변수값 입니다, dy=조명의 점등속도 변수 입니다. 
unsigned long times=0;  //현재시간값 저장변수
extern volatile unsigned long timer0_millis;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(2, INPUT); // 버튼 
   Serial.begin(9600);
}
void loop() {
    if(digitalRead(2)==0){
     timer0_millis=0;
     while(digitalRead(2) !=1){// 버튼을 누르는 동안 반복 
      if(millis()>=1000){
        if(flag==0){ //버튼을 누른지 1초 이상이고 flag 값이  0 일 경우(동작) 블루 LED 로 동작 알림  
          digitalWrite(b,HIGH);
          digitalWrite(y,LOW);
          digitalWrite(r,LOW);
          }else{//버튼을 누른지 1초 이상이고 flag 값이  1 일 경우(정지) 핑크 LED 로 정지 알림
        digitalWrite(b,LOW);
        digitalWrite(y,LOW);
        digitalWrite(r,HIGH);
          }
      }
      }
      times=millis();Serial.println(times/1000);
      if(times>=1000){
        digitalWrite(b,HIGH);
        if(flag==0){
          flag=1;
        }else{
          digitalWrite(r,HIGH);
          flag=0;
        }
        Serial.println(flag);
      }else {
        if(bt>13){
          bt=0;
        }else{
          bt=bt+1;
        }
      }
  }
//  Serial.println(flag);
 Serial.println(bt);
   cd = analogRead(A5);
 // Serial.println(cd);
   if(cd<=300 || flag== 1){
     if(bt==0){// 기본(랜덤 점등 모드
     for(red=0,blue=255;red<255,blue>=1;red++,blue--){
   analogWrite(r,red); 
   analogWrite(b,blue);
   delay(dy);
   if(digitalRead(2)==0){break;}
  }
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(red=255,blue=1;red>=0,blue<255;red--,blue++){
    analogWrite(r,red); 
   analogWrite(b,blue);
   delay(dy);
   if(digitalRead(2)==0){break;}
  }
   for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(dy);
  if(digitalRead(2)==0){break;}
  } 
     }else if(bt==1){// R-B-Y 순차 점등 모드 
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(dy);
   if(digitalRead(2)==0){break;}
  }
   for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(dy);
  } 
  for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
     }else if(bt==2){//  LED 개별 점등 모드
       
  for(red;red<255;red++){
   analogWrite(r,red); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
    for(blue=0;blue<255;blue++){
   analogWrite(b,blue); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(dy);
  } 
  for(yellow=0;yellow<255;yellow++){
   analogWrite(y,yellow); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(red=0;red<255;red++){
   analogWrite(r,red); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }   
  
     }else if(bt==3){
       for(red=0;red<255;red++){
   analogWrite(r,red); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
   for(blue=0;blue<255;blue++){
   analogWrite(b,blue); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(yellow=0;yellow<255;yellow++){
   analogWrite(y,yellow); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  }
  for(int i=0;i<3;i++){
   for(red=255,blue=255,yellow=255;red>=0,blue>=0;red--,blue--,yellow--){
    analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(red=0,blue=0,yellow=0;red<255,blue<255,yellow<255;red++,blue++,yellow++){
   analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
   if(digitalRead(2)==0){break;} 
  }
   for(red=255,blue=255,yellow=255;red>=0,blue>=0;red--,blue--,yellow--){
    analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
     }else if(bt==4){//LED 동시 점등 모드 
       for(red=0,blue=0,yellow=0;red<255,blue<255,yellow<255;red++,blue++,yellow++){
   analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(red=255,blue=255,yellow=255;red>=0,blue>=0;red--,blue--,yellow--){
    analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
     }else if(bt==5){// 분홍 LED 숨쉬기 모드 
       digitalWrite(y,LOW);
      digitalWrite(b,LOW);
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
     }else if(bt==6){// 블루LED 숨쉬기모드
       digitalWrite(r,LOW);
      digitalWrite(y,LOW);
       for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
     }else if(bt==7){// 노란 LED  숨쉬기모드 
        digitalWrite(r,LOW);
      digitalWrite(b,LOW);
       for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(dy);
    if(digitalRead(2)==0){break;}
  }
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(dy);
   if(digitalRead(2)==0){break;}
  } 
     }
     
     if(bt==8){// LED 분홍 점등
      digitalWrite(y,LOW);
      digitalWrite(b,LOW);
      for(red=254;red<255;red++){
  analogWrite(r,red); 
  }
     }else if(bt==9){// LED 블루 점등
       digitalWrite(r,LOW);
      digitalWrite(y,LOW);
       for(blue=254;blue<255;blue++){
  analogWrite(b,blue); 
  }
     }else if(bt==10){// LED 노랑 점등
     digitalWrite(r,LOW);
      digitalWrite(b,LOW);
       for(yellow=254;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
     }else if(bt==11){
      analogWrite(y,0);
       for(red=254,blue=254;red<255,blue<255;red++,blue++){
   analogWrite(r,red); 
   analogWrite(b,blue);
  }
     }else if(bt==12){
      analogWrite(b,0);
      for(red=254,yellow=254;red<255,yellow<255;red++,yellow++){
   analogWrite(r,red); 
   analogWrite(y,yellow);
  }
     }else if(bt==13){
      analogWrite(r,0);
       for(blue=254,yellow=254;blue<255,yellow<255;blue++,yellow++){
   analogWrite(b,blue); 
   analogWrite(y,yellow);
  }
     }else if(bt == -1){
      analogWrite(r,0); 
   analogWrite(b,0);
   analogWrite(y,0);
   bt=0;
     }
 
   }else{//  주변이 밝을 경우 LED off
     analogWrite(r,0); 
   analogWrite(b,0);
   analogWrite(y,0);
   bt=0;
    } // on off 체크 구문 종료 
}// roop문 종료 
