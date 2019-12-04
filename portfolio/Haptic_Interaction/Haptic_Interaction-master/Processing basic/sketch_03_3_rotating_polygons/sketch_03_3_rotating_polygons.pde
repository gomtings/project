// based on
// https://processing.org/examples/regularpolygon.html

void setup() {
  size(640, 360); // 창 생성 
}

void draw() {
  background(102); 창의 배경 색 
  
  pushMatrix();
  translate(width*0.2, height*0.5); // 도형을 출력 하는 위치 
  rotate(frameCount / 200.0); // 회전 () 값은 회전속도 
  polygon(0, 0, 82, 3);  // Triangle 삼각형 그리기 polygon()의 매개 변수 는 
   // 0,0 은 도형을 출력할 좌표,82,3  은 
  popMatrix();
  
  pushMatrix();
  translate(width*0.5, height*0.5);// 도형을 출력 하는 위치 
  rotate(frameCount / 50.0); // 회전 () 값은 회전속도 
  polygon(0, 0, 80, 20);  // Icosahedron 20면체 그리기
  popMatrix();
  
  pushMatrix();
  translate(width*0.8, height*0.5);// 도형을 출력 하는 위치 
  rotate(frameCount / -100.0);// 회전 () 값은 회전속도 
  polygon(0, 0, 70, 7);  // Heptagon 7각형 그리기 
  popMatrix();
}

void polygon(float x, float y, float radius, int npoints) {// 각 도형을 출력 하기 위한 함수 매개변수는
//x,y,radius,npoints 가 있으며 x,y는 도형을 출력할 위치 radius 는 도형의 크기 npoints 는 도형의 모양 이다.ex 삼각형은 3 사각형은 4 이다.   
  float angle = TWO_PI / npoints;
  beginShape();
  for (float a = 0; a < TWO_PI; a += angle) {
    float sx = x + cos(a) * radius;
    float sy = y + sin(a) * radius;
    vertex(sx, sy);
  }  
  endShape(CLOSE);
}