package 배열;
public class 연습01 {
	public static void main(String[] args) {
      int[] arry ={6,9,1,3,5};
        int temp;
        for(int i=0; i<arry.length-1;i++){
        	for(int j=i+1;j<arry.length;j++){
        		if(arry[i]>arry[j]){
        			temp=arry[i];
        			arry[i]=arry[j];
        			arry[j]=temp;
        		}
        	}
        }
        System.out.print("출력:");
        for(int data :arry)
        	System.out.print(data+" ");
	}

}
