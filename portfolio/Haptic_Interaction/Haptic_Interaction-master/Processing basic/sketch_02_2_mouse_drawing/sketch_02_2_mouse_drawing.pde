int saveCount; // ���� ���� ���� 

void setup() {
  size(500, 500); â ���� 
  saveCount = 0; // ������ 0���� �ʱ�ȭ 
}

void draw() {
  background(204);// â�� ��� ���� 
  line(0, 0, mouseX, mouseY); //  0,0 ���� ���� ���� �׸���.
}

void mousePressed() {
  //String filename = "line_" + str(frameCount) + ".jpg";
  String filename = "line_" + str(saveCount) + ".jpg"; // ���ڿ� ���� _ "line_"+saveCount ���� ���ڿ��� ��ȯ+".jpg" 
  
  saveCount = saveCount + 1;
  save(filename); // ���� 
  println("saved..." + filename); // �ֿܼ� ��� 
}