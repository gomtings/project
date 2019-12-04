import java.util.*;
class xxx {
	private int ga, se, he; // 가로, 세로, 높이 저장
	private int volume; // 부피 저장

	public xxx(int ga, int se, int he) {
		this.ga = ga;
		this.se = se;
		this.he = he;
		volume = ga * se * he; // 부피 계산
	}

	// 매개변수로 받은 객체의 필드 volume을 비교하여 실행중인 객체가 크면 1을 매개변수로 받은 객체가 크면 -1을 반환
	public int isMax(xxx obj) {
		if (this.volume > obj.volume)
			return 1;
		else
			return -1;
	}

	public int getVolume() {
		return volume;
	}

	public String toString() {
		String str = "가로 : " + ga + "\t세로 : " + se + "\t높이 : " + he;
		str += "\t부피 : " + volume;
		return str;
	}
}

public class aa3 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		xxx[] obj = new xxx[5]; // 객체 배열 선언 & 생성
		xxx max;
		int cnt = 0;
		System.out.println("가로 세로 높이를 입력하세요(공백으로 구분)");

		// 입력받은 값으로 객체 배열 원소 초기화
		for (int i = 0; i < obj.length; i++) {
			System.out.print((i + 1) + "번째 : ");
// 객체 배열 초기화
			obj[i] = new xxx(in.nextInt(), in.nextInt(), in.nextInt()); 
		}
		for (xxx b : obj) { // 객체 내용 출력
			System.out.print((++cnt) + "번째 Box : ");
			System.out.println(b);
		}

// 부피가 가장 큰 객체 찾기
		max = obj[0];
		for (int i = 1; i < obj.length; i++) {
			if (max.isMax(obj[i]) == -1)
				max = obj[i];
		}
		System.out.println("가장 큰 부피 => " + max.getVolume());
	}
}

