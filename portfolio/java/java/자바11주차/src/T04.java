public class T04 {
	public static void mainI(String[] args){
		int[] dim=new int[6];
		System.out.println("Max = " + max() );
		System.out.println("Min = " + min());
		initArray(dim);
	}
	public static void initArray(int[] a){
		for(int i=0;i<a.length;i++){
			a[i]=(int)(Math.random()*100+1);
		}
	}	
	public static int max(){
		int[] ar = new int[6];
		int mex=0;
		for(int i=0;i<ar.length;i++){
			if(ar[i]>mex){
				mex=ar[i];
			}
		}
		return mex;
	}
	public static int min(){
		int[] ar = new int[6];
		int min=0;
		for(int i=0;i<ar.length;i++){
			if(ar[i]>min){
				min=ar[i];
			}
		}
		return min;
	}
}
