void setup() 
{
  size(640, 360); // 창 생성 
}

void draw() 
{
  background(102); // 배경 색상 지정  
  pushMatrix();
    translate(width*0.5, height*0.5); // 삼각형을 출력 할 좌표 
    //rotate(frameCount / 200.0);
    polygon(0, 0, 82, 3);  // Triangle polygon 함수 실행 
  popMatrix();
}

void polygon(float x, float y, float radius, int npoints) // 삼각형 출력을 위한 함수 
{
  float angle = TWO_PI / npoints;
  beginShape();
  for (float a = 0; a < TWO_PI; a += angle) 
  {
    float sx = x + cos(a) * radius;
    float sy = y + sin(a) * radius;
    vertex(sx, sy);
  }
  endShape(CLOSE);
}