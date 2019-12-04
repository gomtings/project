import java.util.Scanner;

public abstract class T321 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int c;
		System.out.print("정수 출력을 해주세요.");
		c = scan.nextInt();
        if(c>1000)
        {
        System.out.println("범위를 초과 하였습니다.");
        c=scan.nextInt();
        }
        
        System.out.println("정수 입력값은" + c +"입니다.");
        System.out.println(c>>>2);
        System.out.println(c>>2);
        System.out.println(c<<2);
       
   
	}

}
