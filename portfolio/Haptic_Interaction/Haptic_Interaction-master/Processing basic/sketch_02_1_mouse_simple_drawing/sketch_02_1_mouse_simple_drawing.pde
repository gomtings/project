void setup() {
  size(100, 100);  //â ���� 
}

void draw() {
  background(204); // ��� ���� 
  line(0, 0, mouseX, mouseY); //  0,0 ���� ���� ���� �׸���.
}

void mousePressed() {
  save("line.jpg");// ���� 
  println("saved..."); // �ֿܼ� "saved..." ��� 
}