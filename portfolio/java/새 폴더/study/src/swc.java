import java.util.Scanner;
public class swc {
	public static void main(String[] args){
		Scanner tt = new Scanner(System.in);
		int ttt;
		int sen = 0;
		String cnet;
		System.out.print("달 입력");
		ttt = tt.nextInt();
		switch(sen)
		{
		case 12:
		case 1:
		case 2:
		case 3:
			cnet = "겨울";
			break;
		case 4:
		case 5:
		case 6:
			cnet = "봄";
			break;
		case 7:
		case 8:
			cnet = "여름";
			break;
		case 9:
		case 10:
		case 11:
			cnet = "가을";
			break;
		default: 
			cnet = "잘못 입력 하셧습니다";
			break;
			
		}
	System.out.println("계절은:" + cnet);
	}

}
