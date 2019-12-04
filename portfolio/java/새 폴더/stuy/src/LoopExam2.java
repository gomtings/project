
public class LoopExam2 {
	public static void main(String[] args){
		int cnt=0;  //한 행에 출력된 숫자 계산
		for(int i=1; i<=100; i++){			if(i%5==0)
				continue;  //5의 배수이면 i값을 증가하는 곳으로 이동
			else{
				++cnt;  //출력된 횟수 계산
				System.out.print((cnt%5==0)?" "+ i+"\n" : i +"   "); //한 행에 5개씩 출력
			}
		}
	}
}

