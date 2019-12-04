
public class random {
	public static void main(String[] args){
		int count=10;
		int rnd;
		while(count >=1){  
			rnd=(int)(Math.random()*60) +1; 
			System.out.println("생성된 난수 :(" + count +")" +  rnd);
			count--;
		}
	}
}

