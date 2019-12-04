import java.util.Scanner;
class aaa {
	private String owner; // 소유주
	private int year; // 연식
	private String type; // 차종
	private int id;   //일련번호

// 정적 변수(클래스 변수) - 객체 생성 없이 클래스로 접근, 생성된 객체 들이 서로 공유
	private static int cnt = 0;

	public aaa(String owner, int year, String type) {
		this.owner = owner;
		this.year = year;
		this.type = type;
		id = ++cnt;
	}
	// 정적메소드 : 지역변수와 정적변수만 사용가능, 정적 메소드만 호출할 수 있다
	public static int getCnt() { // 정적변수 cnt 값 반환
		return cnt;
	}

	public String toString() { // 객체 내용을 문자열로 반환
		return "Car[owner=" + owner + ", year=" + year + ", type=" + type + ", id= " + id +"]";
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		// 필드 초기화에 필요한 값을 생성자 호출 시 생성자 매개변수로 전달
		// 생성자는 객체 생성 시 딱 한번 호출
		aaa carObj1 = new aaa("윤인성", 2014, "소형"); // 객체 선언 & 생성 & 초기화
		aaa carObj2; // 객체 선언
		System.out.print("소유주, 년식, 차종을 순서대로 입력하세요");
		// 표준입력장치로 입력한 값을 생성자 매개변수로 전달하여 필드 초기화
		carObj2 = new aaa(in.next(), in.nextInt(), in.next());
		System.out.println("객체 1: " + carObj1);
		System.out.println("객체 2: " + carObj2);

		// 정적 메소드는 클래스 이름으로 호출
		System.out.println("생성 된 객체 수: " + aaa.getCnt());
		}
}