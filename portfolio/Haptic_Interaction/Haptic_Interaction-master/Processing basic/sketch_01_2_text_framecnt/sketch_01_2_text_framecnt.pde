void setup() {
  size(300,300); // 300*300 창 생성 
 
}

void draw() {
  
  background(255,255,255);// 창 의 배경 색상 설정 255,255,255= 흰색   
  fill(0);// 폰트의 명암  0-검은색 255-흰색   
  
  //text("Hello Strings! " + str(frameCount),10,50); // "Hello Strings!" 문자열과 frameCount 를 10,50 에 출력 
  String buf = String.format("%06d", frameCount); // 숫자를 문자열로 변환 buf에 저장 
  text(buf, 10,50); // buf 에 저장된 문자열을 출력  
  
  
  fill(255/2);   // 폰트의 명암  0-검은색 255-흰색   
  text("Hello Strings!",10,100); "Hello Strings!" 문자열을 창의 10,100 좌표에 출력
  fill(255/3);      
  text("Hello Strings!",10,150);
}