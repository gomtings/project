int r = 3; // Red
int b = 6; // blue 
int y = 11; // yellow
int red=0,blue=255,yellow=255; 
int dy=500;
int cd=0 , bt=0;
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
    
    switch(bt){
      
      case 0: // 기본(랜덤 점등 모드

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
  
      break;
      case 1: // R-B-Y 순차 점등 모드 
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
      break;
      case 2: //  LED 개별 점등 모드 
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
      break;
      case 3:
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
  for(yellow=255;yellow>=1;yellow--){
   analogWrite(y,yellow); 
  delay(3);
  } 
      break;
      case 4://LED 동시 점등 모드 
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
      break;
      case 5: // 분홍 LED 숨쉬기 모드 
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
      break;
      case 6: // 블루LED 숨쉬기모드
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
      break;
      
      case 7: // 노란 LED  숨쉬기모드 
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
      break;
      
      case 8:// LED 분홍 점등
      analogWrite(r,255); 
      break;
      
      case 9:// LED 블루 점등
      analogWrite(b,255); 
      break;
      
      case 10:// LED 노랑 점등
     analogWrite(y,255); 
      break;
     
      case 11:
       analogWrite(r,255);
        analogWrite(b,255);  
      break;
      /*
      case 12:
      analogWrite(r,255);
        analogWrite(y,255);
      break
      case 13:
         analogWrite(b,255);
        analogWrite(y,255);
      break;
      */
    }
 
   }else{//  주변이 밝을 경우 LED off 
     analogWrite(r,0); 
   analogWrite(b,0);
   analogWrite(y,0);
   bt=0;
    } // on off 체크 구문 종료 
}// roop문 종료 
