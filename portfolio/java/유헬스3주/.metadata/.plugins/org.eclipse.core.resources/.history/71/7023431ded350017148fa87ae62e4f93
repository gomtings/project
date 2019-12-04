package 객체;

import java.util.*;

class Datas {
	int year;
	int m;
	int w;

	void display1() {
		System.out.println(year + "." + m + "." + w);
	}

	void display2() {
		String[] Month = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
				"October", "November", "December" };
		System.out.println( Month[(m - 1)] + w+"."+year);
	}
}

public class data {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		Datas ta = new Datas();
		System.out.println("년도를 입력하세요.");
		ta.year = key.nextInt();
		System.out.println("월를 입력하세요.");
		ta.m = key.nextInt();
		System.out.println("일를 입력하세요.");
		ta.w = key.nextInt();
		ta.display1();
		ta.display2();
	}
}
