import java.util.Scanner;
public class swc {
	public static void main(String[] args){
		Scanner tt = new Scanner(System.in);
		int ttt;
		int sen = 0;
		String cnet;
		System.out.print("�� �Է�");
		ttt = tt.nextInt();
		switch(sen)
		{
		case 12:
		case 1:
		case 2:
		case 3:
			cnet = "�ܿ�";
			break;
		case 4:
		case 5:
		case 6:
			cnet = "��";
			break;
		case 7:
		case 8:
			cnet = "����";
			break;
		case 9:
		case 10:
		case 11:
			cnet = "����";
			break;
		default: 
			cnet = "�߸� �Է� �ϼ˽��ϴ�";
			break;
			
		}
	System.out.println("������:" + cnet);
	}

}
