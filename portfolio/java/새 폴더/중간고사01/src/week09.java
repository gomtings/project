import java.util.*;
public class week09 {//class ���� 
	public static void main(String [] args){ // ���θ޼ҵ� ���� 
		Scanner key = new Scanner(System.in);
		String id,pw;//���ڿ� id.pw���� ����
		int ing=0,num=0;//����,���� ī��Ʈ ���� 
		System.out.print("���̵� �Է��ϼ���.");
		id=key.next();
		while(true){
			System.out.print("��й�ȣ�� �Է��ϼ���.");
			pw=key.next();
			if(pw.equalsIgnoreCase("quit"))
				break;
			if(pw.length()>= 8 ){//��й�ȣ 8�ڸ� �Ǻ� 
				for(int a=0;a<pw.length();a++){//for ���� 
					if(pw.charAt(a)>='A'&&pw.charAt(a)<='Z'||pw.charAt(a)>='a'&&pw.charAt(a)<='z'){//������ �Ǻ�
						ing++;//���� ���� ī��Ʈ 
						
					}//if ����
					else if(pw.charAt(a)>='0'&&pw.charAt(a)<='9'){//���� �Ǻ��� 
						num++;//���ڰ��� ī��Ʈ 
					}//�����Ǻ� ���� 
				}//for ���� 
				if(ing ==0 ){//���� �����ڵ� ��� 
					System.out.println("�����ڰ� ���ԵǾ����� �ʽ��ϴ�. ");
					continue;
				}
				else if(num == 0 ){ //���� ���� �ڵ� ��� 
					System.out.println("���ڰ� ���ԵǾ����� �ʽ��ϴ�. ");
					continue;
				}
				else if(num>0&&ing >0){
					System.out.println(id+ "���� �Է��Ͻ� ��й�ȣ�� "+ pw + "�� ��밡���� ��й�ȣ �Դϴ�." );
					break;
				}	
			}//if ������ 
			System.out.println("��й�ȣ�� 8�ڸ� �̸��Դϴ�. ");
			continue;
		}//while ���� 
		
	}//���� �޼ҵ� ���� 
}//class ���� 
