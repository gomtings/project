
public class LoopExam1 {
	public static void main(String[] args){
		int count=10;
		int rnd;
		while(count >=1){  
			rnd=(int)(Math.random()*60) +1;  //1부터 60사이의 난수 생성
			System.out.println("생성된 난수 :(" + count +")" +  rnd);
			count--;
		}
	}
}