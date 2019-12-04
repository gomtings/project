import java.util.Scanner;
public class randomsss {
	public static void main(String[] args) {
		Scanner v = new Scanner(System.in);
		int a=(int)(Math.random()*100+1);
		while(true){
			System.out.print("정수를 입력하세요.");
			int x=v.nextInt();
			if(x<a){
				System.out.println("난수보다 작은 값을 입력했습니다.");
			}
			else if(x>a){
				System.out.println("난수보다 큰 값을 입력했습니다.");
			}
			else if(x==a){
				System.out.println("난수를 맞췄습니다.");
				break;
			}
		}
	}

}
