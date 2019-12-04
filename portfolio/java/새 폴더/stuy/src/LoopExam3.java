
public class LoopExam3 {
	public static void main(String[] args){
		for(int i=1;i<=5;i++){
			for(int j=i ; j<=5 ; j++)  //제어변수 j값을 바깥쪽 제어변수 i로 초기화
				System.out.print("  " + j); //한 행 출력
			System.out.println();  //한 행 출력 후 줄바꿈
		}
	}
}

