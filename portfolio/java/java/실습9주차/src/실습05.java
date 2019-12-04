
public class 실습05 {
	public static void main(String [] args){
		int[] arry = new int [10];
		System.out.println("===배열 원소 출력===");
		for(int a=0; a<arry.length;a++){
			arry[a]=(int)(Math.random()*200+1);
			 System.out.print(arry[a]+" ");
		}//for 종료 
		System.out.println();
		System.out.println("===역순 으로 출력===");
		for(int z =arry.length-1;z>=0;z--){
			System.out.print(arry[z]+" ");
		}
	}

}
