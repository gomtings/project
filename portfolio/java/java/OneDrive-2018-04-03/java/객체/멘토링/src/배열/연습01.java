package �迭;
public class ����01 {
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
        System.out.print("���:");
        for(int data :arry)
        	System.out.print(data+" ");
	}

}
