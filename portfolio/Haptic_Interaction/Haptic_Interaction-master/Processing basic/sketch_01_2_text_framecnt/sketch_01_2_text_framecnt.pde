void setup() {
  size(300,300); // 300*300 â ���� 
 
}

void draw() {
  
  background(255,255,255);// â �� ��� ���� ���� 255,255,255= ���   
  fill(0);// ��Ʈ�� ���  0-������ 255-���   
  
  //text("Hello Strings! " + str(frameCount),10,50); // "Hello Strings!" ���ڿ��� frameCount �� 10,50 �� ��� 
  String buf = String.format("%06d", frameCount); // ���ڸ� ���ڿ��� ��ȯ buf�� ���� 
  text(buf, 10,50); // buf �� ����� ���ڿ��� ���  
  
  
  fill(255/2);   // ��Ʈ�� ���  0-������ 255-���   
  text("Hello Strings!",10,100); "Hello Strings!" ���ڿ��� â�� 10,100 ��ǥ�� ���
  fill(255/3);      
  text("Hello Strings!",10,150);
}