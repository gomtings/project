
public class java06 {
	public static void main(String[] args){
	int[][] arry = new int[5][];
	int k=1;
	for(int i=0;i<arry.length;i++){
		arry[i] = new int[i+1];
	}
	System.out.print("======비정형 배열 출력========");
	System.out.println();
	for(int i=0;i<arry.length;i++){
		for(int j=0;j<arry[i].length;j++){
			arry[i][j]=k++;
			System.out.print(arry[i][j]+"\t");
		}
		System.out.println();
	}
	}

}
