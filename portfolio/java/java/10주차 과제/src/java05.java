public class java05 {
	public static void two_array(int[][] dim) {
		for(int i=0;i<dim.length;i++){
			for(int j=0;j<dim[i].length;j++){
				System.out.print(dim[i][j]+" ");
			}
			System.out.println();
		}
	}
	public static void main(String[] args){
		int[][] ar=new int[][]{{12,3,8},{5,7,6},{2,4,5}};
		int[][] ar2=new int[][]{{12,3,8},{5,7,6},{2,4,5}};
		int[][] hap=new int[3][3];
		for(int i=0;i<ar.length;i++){
			for(int j=0;j<ar[i].length;j++){
			hap[i][j] =ar[i][j]+ar[i][j]; 	
			}
		}
		two_array(hap);
		
	}
}
