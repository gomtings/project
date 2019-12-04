import java.util.*;
public class java04 {
	public static char Hex_input(Scanner key){
		System.out.print("16진수 한개를 입력하세요");
		System.out.print("반복문을 종료 하려면 s or S를 입력하세요.");
		return key.next().charAt(0);
	}
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		String[] hexa = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
				"1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
		
		while(true){
		char ch=Hex_input(key);
		int a=ch-48;
		 if(ch=='s'||ch=='S')
			   break;
		   if(ch>='0'&&ch<='9'){
			   System.out.println("16진수 "+ch+"는 이진수로"+hexa[a]);
		   }
		   else if(ch>='a'&&ch<='f'){
			   System.out.println("16진수 "+ch+"는 이진수로" + hexa[ch-'a'+10]); 
		}
		   else{
			   System.out.println();
		   }
		}
	}
}
