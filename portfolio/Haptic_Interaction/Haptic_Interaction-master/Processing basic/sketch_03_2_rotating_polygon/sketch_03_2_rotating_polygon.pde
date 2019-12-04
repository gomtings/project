void setup() 
{
	size(640, 360); //창생성 
}

void draw() 
{
	background(102);   // 배경 색상 지정  
	pushMatrix();
  	translate(width*0.5, height*0.5);// 삼각형을 출력 할 좌표 
    rotate(frameCount / 50.0); // 50? 200? 삼각형의 회전 속도 
  	polygon(0, 0, 82, 3);  // Triangle // 삼각형 출력 polygon 함수 호출
	popMatrix();
}


void polygon(float x, float y, float radius, int npoints)
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