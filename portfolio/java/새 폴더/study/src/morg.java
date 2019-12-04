import java.util.Scanner;
public class morg {
	public static void main(String[] args){
char ch;
Scanner cc = new Scanner(System.in);
System.out.print("남자이면 m 여자이면 w 를 입력하세요.");
ch = cc.next().charAt(0);
if(ch =='m'){
	System.out.println(ch+ "남자입니다.");
}
else if(ch == 'w'){
	System.out.println(ch+ "여자입니다.");
}
else System.out.println("잘못 입력하셧습니다.");
}
}
