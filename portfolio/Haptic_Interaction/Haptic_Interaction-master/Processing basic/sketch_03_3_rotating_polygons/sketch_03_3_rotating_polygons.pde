// based on
// https://processing.org/examples/regularpolygon.html

void setup() {
  size(640, 360); // â ���� 
}

void draw() {
  background(102); â�� ��� �� 
  
  pushMatrix();
  translate(width*0.2, height*0.5); // ������ ��� �ϴ� ��ġ 
  rotate(frameCount / 200.0); // ȸ�� () ���� ȸ���ӵ� 
  polygon(0, 0, 82, 3);  // Triangle �ﰢ�� �׸��� polygon()�� �Ű� ���� �� 
   // 0,0 �� ������ ����� ��ǥ,82,3  �� 
  popMatrix();
  
  pushMatrix();
  translate(width*0.5, height*0.5);// ������ ��� �ϴ� ��ġ 
  rotate(frameCount / 50.0); // ȸ�� () ���� ȸ���ӵ� 
  polygon(0, 0, 80, 20);  // Icosahedron 20��ü �׸���
  popMatrix();
  
  pushMatrix();
  translate(width*0.8, height*0.5);// ������ ��� �ϴ� ��ġ 
  rotate(frameCount / -100.0);// ȸ�� () ���� ȸ���ӵ� 
  polygon(0, 0, 70, 7);  // Heptagon 7���� �׸��� 
  popMatrix();
}

void polygon(float x, float y, float radius, int npoints) {// �� ������ ��� �ϱ� ���� �Լ� �Ű�������
//x,y,radius,npoints �� ������ x,y�� ������ ����� ��ġ radius �� ������ ũ�� npoints �� ������ ��� �̴�.ex �ﰢ���� 3 �簢���� 4 �̴�.   
  float angle = TWO_PI / npoints;
  beginShape();
  for (float a = 0; a < TWO_PI; a += angle) {
    float sx = x + cos(a) * radius;
    float sy = y + sin(a) * radius;
    vertex(sx, sy);
  }  
  endShape(CLOSE);
}