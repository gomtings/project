import java.util.Scanner;
public class No040608 {
	public static void main(String[] args){
		Scanner vv = new Scanner(System.in);
		char[] ch={'A','B','C','D','E','F','G'};
		char[] ch2={'0','0','0','0','0','0','0'};;
		//while(true){
			System.out.println("좌석 배치도");
			for(int a=0;a<ch.length;a++){
				System.out.print(ch[a]+" ");
			}
			System.out.println();
			for(int a=0;a<ch.length;a++){
				System.out.print(ch2[a]+" ");
			}
			System.out.println();
			System.out.println("원하시는 좌석을 입력해 주세요:(x누르면 종료합니다.)");
			char c=vv.next().charAt(0);
			int i = c - 65;
			ch2[i]='x';
			for(int g=0;g<ch.length;g++){
				System.out.print(ch2[g]+" ");
			}
		}
	}
//}
