
public class ignore {
	public static void main(String[] args) {
		String str ="Hello";
		String str2 ="hello";
		System.out.print(str.charAt(1));
		if(str.equalsIgnoreCase(str2)){//IgnoreCase 대소문자 구별x
			System.out.print("참");
		}
		else{
			System.out.print("거짓");
		}
		System.out.print(str.substring(1,2));
	}
	

}
