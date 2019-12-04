public class HapFor {
	public static void main(String[] args) {
		int hap=0;  //누적된 값을 보관하는 변수, 반드시 초기화 되어야 한다
		for(int i=1; i<=100;i++)
			hap += i;
		System.out.println("1부터 100까지 합  = " + hap);  //
		
	}
}
