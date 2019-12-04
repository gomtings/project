int r = 3; // Red
int b = 6; // blue 
int y = 11; // yellow
int red=0,blue=0,yellow=0; 
int dy=500;
int cd=0 , bt=0,flag=-1;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(2, INPUT); // 버튼 
   Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(2) == 0){
    if(bt >13 ){bt=-1;}
    bt++;
    }
  Serial.println(bt);
   cd = analogRead(A5);
  Serial.println(cd);
   if(cd<=300){
      flag=-1;
     if(bt==0){// 기본(랜덤 점등 모드
     for(red=0,blue=255;red<255,blue>=1;red++,blue--){
   analogWrite(r,red); 
   analogWrite(b,blue);
   delay(3);
  }
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
  for(red=255,blue=1;red>=0,blue<255;red--,blue++){
    analogWrite(r,red); 
   analogWrite(b,blue);
   delay(3);
  }
   for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
  } 
     }else if(bt==1){// R-B-Y 순차 점등 모드 
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(3);
  }
   for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(3);
  }
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(3);
  } 
  for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(3);
  } 
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
  } 
     }else if(bt==2){//  LED 개별 점등 모드 
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(3);
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(3);
  } 
   for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(3);
  }
    for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(3);
  } 
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
  }  
     }else if(bt==3){
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(3);
  }
  for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(3);
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(3);
  }
   for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
    for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(3);
  } 
   for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(3);
  }
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
  } 
     }else if(bt==4){//LED 동시 점등 모드 
       for(red=0,blue=0,yellow=0;red<255,blue<255,yellow<255;red++,blue++,yellow++){
   analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(3);
  }
  for(red=255,blue=255,yellow=255;red>=0,blue>=0;red--,blue--,yellow--){
    analogWrite(r,red); 
   analogWrite(b,blue);
   analogWrite(y,yellow);
   delay(3);
  }
     }else if(bt==5){// 분홍 LED 숨쉬기 모드 
       digitalWrite(y,LOW);
      digitalWrite(b,LOW);
      for(red=1;red<255;red++){
  analogWrite(r,red); 
   delay(3);
  }
  for(red=255;red>=1;red--){
   analogWrite(r,red); 
  delay(3);
  } 
     }else if(bt==6){// 블루LED 숨쉬기모드
       digitalWrite(r,LOW);
      digitalWrite(y,LOW);
       for(blue=1;blue<255;blue++){
  analogWrite(b,blue); 
   delay(3);
  }
  for(blue=255;blue>=1;blue--){
   analogWrite(b,blue); 
  delay(3);
  } 
     }else if(bt==7){// 노란 LED  숨쉬기모드 
        digitalWrite(r,LOW);
      digitalWrite(b,LOW);
       for(yellow=1;yellow<255;yellow++){
  analogWrite(y,yellow); 
   delay(3);
  }
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
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
       for(red=254,blue=254;red<255,blue<255;red++,blue++){
   analogWrite(r,red); 
   analogWrite(b,blue);
  }
     }else if(bt==12){
      for(red=254,yellow=254;red<255,yellow<255;red++,yellow++){
   analogWrite(r,red); 
   analogWrite(b,blue);
  }
     }else if(bt==13){
       for(blue=254,yellow=254;blue<255,yellow<255;blue++,yellow++){
   analogWrite(r,red); 
   analogWrite(b,blue);
  }
     }
 
   }else{//  주변이 밝을 경우 LED off
     analogWrite(r,0); 
   analogWrite(b,0);
   analogWrite(y,0);
   bt=0;
    } // on off 체크 구문 종료 
}// roop문 종료 
