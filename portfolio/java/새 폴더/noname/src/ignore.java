
public class ignore {
	public static void main(String[] args) {
		String str ="Hello";
		String str2 ="hello";
		System.out.print(str.charAt(1));
		if(str.equalsIgnoreCase(str2)){//IgnoreCase ��ҹ��� ����x
			System.out.print("��");
		}
		else{
			System.out.print("����");
		}
		System.out.print(str.substring(1,2));
	}
	

}
