import java.util.Scanner;
public class gugudans {
	public static void main(String[] args) {
		
		int c;
		int count = 0, count2 = 0, x = 0;
		char s;
		Scanner v = new Scanner(System.in);
		while (true){
			
			System.out.print("�������� �н��մϴ�.����(n or N)���(y or Y)");
			s=v.next().charAt(0);
			
			if (s == 'y' || s == 'Y') {
				
				for (int a = 1; a <=4; a++){
					
					int z = (int) (Math.random() * 8 + 1);
					int z2 = (int) (Math.random() * 8 + 1);
					int z3 = z * z2;
					System.out.print(z + "*" + z2 + "=");
					c = v.nextInt();
					if ((c == z3)) {

						System.out.println("�����Դϴ�.");
						count++;// ���䰳�� ī��Ʈ 
					} else {
						System.out.println("�����Դϴ�.");
						count2++; // ���� ���� ī��Ʈ 
					}
					if(a==4){
						System.out.print("�������� �н��մϴ�.����(n or N)���(y or Y)");
					s=v.next().charAt(0);
					if(s == 'N' || s == 'n'){
						break;
					}
					a=0;
					}
			} //for��
			
				}//if �� y or n�Ǻ�
			break;
				}//while ��
		System.out.print("���� ������"+count);// ���� ���� ���
				}
			}
		

