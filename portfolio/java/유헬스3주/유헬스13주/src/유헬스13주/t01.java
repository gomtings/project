package 유헬스13주;

public class t01 {
	public static void main(String[] args) {
		String proverb = "A barking dog"; // new 연산자 생략
		String s1;
	 char ch;
	 boolean b;
	int i = Integer.parseInt("123");   // 문자열 “123”을 숫자 123으로 변환
	double d = Double.parseDouble("3.14"); // 문자열 "3.14”을 숫자 3.14로 변환

		System.out.println("문자열의 길이 =" + proverb.length());
	 ch = proverb.charAt(3);              //4번째 문자 반환
	s1 = proverb.toUpperCase();          // 대문자로 변환
	 b= proverb.equals("a barking Dog");  //문자열 비교, 같은면 true 다르면 false 반환
	System.out.println(s1);
	System.out.println(ch);
	System.out.println(b);
	System.out.println("결과 :" + (i+d));
		}
	}
