void setup() {
  size(100, 100);  //창 생성 
}

void draw() {
  background(204); // 배경 색상 
  line(0, 0, mouseX, mouseY); //  0,0 에서 부터 선을 그린다.
}

void mousePressed() {
  save("line.jpg");// 저장 
  println("saved..."); // 콘솔에 "saved..." 출력 
}