
public class �ǽ�05 {
	public static void main(String [] args){
		int[] arry = new int [10];
		System.out.println("===�迭 ���� ���===");
		for(int a=0; a<arry.length;a++){
			arry[a]=(int)(Math.random()*200+1);
			 System.out.print(arry[a]+" ");
		}//for ���� 
		System.out.println();
		System.out.println("===���� ���� ���===");
		for(int z =arry.length-1;z>=0;z--){
			System.out.print(arry[z]+" ");
		}
	}

}
