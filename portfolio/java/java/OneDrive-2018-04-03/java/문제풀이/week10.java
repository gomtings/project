import java.util.Scanner;
public class week10 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String id,pw; // id,pw ���� 
		int ing=0,num=0;// ����,���� ī��Ʈ ���� 
		//id �Էº�
		System.out.println("id�� �Է��ϼ���.(quit �Է½� ����)");
	   id=key.next(); //id �Է� 
	 //id �Է� ���� 
	   while(true){// while ���� ����,���ѷ��� 
		   //pw �Է�.�Ǻ�����. 
		   System.out.println("pw�� �Է��ϼ���.");
		   pw=key.next();//pw �Է� 
		   if(pw.equalsIgnoreCase("quit")){// quit �Է½� ���� 
			   break;
		   }
		   if(pw.length()>=8){//pw�� ���̰� 8�ڸ� �̻� �Ǻ� 
			   for(int a=0;a<pw.length();a++){//for ������.
				   if((pw.charAt(a) >='A' && pw.charAt(a)<='Z')||(pw.charAt(a)>='a' && pw.charAt(a)<='z')){
					   ing++;
					   //������ �����Ǻ�,������ ���Ե� ������� ī��Ʈ �Ѵ�. 
				   }
				   else if(pw.charAt(a)>='0'&&pw.charAt(a)<='9'){
					   num++;
					   //���� �Ǻ��� �Ѵ�. �������Խ� ī��Ʈ 
				   }   
			   } //for�� ����
			   //������ ���� �ڵ� ��� 
			   if(ing ==0){  //�����ڰ� ���� ��� 
				   System.out.println("�����ڰ� ���ԵǾ����� �ʽ��ϴ�.");
				   continue; 
			   }
			   else if (num == 0){ //���ڰ� ������� 
				   System.out.println("���ڰ� ���ԵǾ����� �ʽ��ϴ�.");
				   continue;  
			   }
			   else // �� �����ǿ� ������ �ȵɰ��  �ݺ��� ���� �Ѵ�. 
				   break;
		   }// pw���� �Ǻ� �� �κ� ���� 
		   System.out.println("�̹й�ȣ�� 8�ڸ� �̸� �Դϴ�. �ٽ��Է��ϼ���.");
	   }//while ���� 
	   System.out.print( id + "�� �Է��Ͻ� ��й�ȣ��"  + pw + "�Դϴ�.");
	}//main �޼ҵ� ���� 
}//class ���� 
