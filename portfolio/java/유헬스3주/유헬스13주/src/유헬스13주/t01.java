package ���ｺ13��;

public class t01 {
	public static void main(String[] args) {
		String proverb = "A barking dog"; // new ������ ����
		String s1;
	 char ch;
	 boolean b;
	int i = Integer.parseInt("123");   // ���ڿ� ��123���� ���� 123���� ��ȯ
	double d = Double.parseDouble("3.14"); // ���ڿ� "3.14���� ���� 3.14�� ��ȯ

		System.out.println("���ڿ��� ���� =" + proverb.length());
	 ch = proverb.charAt(3);              //4��° ���� ��ȯ
	s1 = proverb.toUpperCase();          // �빮�ڷ� ��ȯ
	 b= proverb.equals("a barking Dog");  //���ڿ� ��, ������ true �ٸ��� false ��ȯ
	System.out.println(s1);
	System.out.println(ch);
	System.out.println(b);
	System.out.println("��� :" + (i+d));
		}
	}
