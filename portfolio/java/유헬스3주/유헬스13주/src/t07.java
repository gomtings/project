import java.util.*;
public class t07 {
	public static void main(String[]  args){
		Scanner key = new Scanner(System.in);
		String str = "�ڹ� ���α׷������ �����ϴ�.��ƽ��ϴ�";
		System.out.println("�����Է�");
		char st = key.next().charAt(0);
		int z=0;
	  int a = str.length();
	  for(int i =0;i<a;i++){
		  if(st == str.charAt(i) ){
			 z=i;
			 break;
		  }
	  }
	  System.out.println(str);
	  System.out.println(st);
	  System.out.println(z);
	}
}
