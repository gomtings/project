int saveCount; // 정수 변수 생성 

void setup() {
  size(500, 500); 창 생성 
  saveCount = 0; // 변수에 0으로 초기화 
}

void draw() {
  background(204);// 창의 배경 색상 
  line(0, 0, mouseX, mouseY); //  0,0 에서 부터 선을 그린다.
}

void mousePressed() {
  //String filename = "line_" + str(frameCount) + ".jpg";
  String filename = "line_" + str(saveCount) + ".jpg"; // 문자열 저장 _ "line_"+saveCount 값을 문자열로 변환+".jpg" 
  
  saveCount = saveCount + 1;
  save(filename); // 저장 
  println("saved..." + filename); // 콘솔에 출력 
}