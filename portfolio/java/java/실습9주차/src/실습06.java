public class �ǽ�06 {
	public static void main(String [] args){
		char [] arry = {'a', 't', 'g', 'w', 'n', 'p', 'q', 'n', 'e'};
		System.out.println("===�迭 ���� ���===");
		for(int a=0; a<arry.length;a++){
			 System.out.print(arry[a]+" ");
			 
		}
		System.out.println();
		System.out.println("===�迭 ���� ���===");
		for(int z :arry){
			System.out.print((char)(z-32)+" ");
		}
	}
}
