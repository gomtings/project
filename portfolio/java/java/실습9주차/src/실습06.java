public class 실습06 {
	public static void main(String [] args){
		char [] arry = {'a', 't', 'g', 'w', 'n', 'p', 'q', 'n', 'e'};
		System.out.println("===배열 원소 출력===");
		for(int a=0; a<arry.length;a++){
			 System.out.print(arry[a]+" ");
			 
		}
		System.out.println();
		System.out.println("===배열 원소 출력===");
		for(int z :arry){
			System.out.print((char)(z-32)+" ");
		}
	}
}
