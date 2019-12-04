import java.util.*;
public class java07 {
	public static void input( int[] ar){
		int temp=0;
		for(int i=0;i<ar.length-1;i++){
			for(int j=i+1;j<ar.length;j++){
				if(ar[i]<ar[j]){
					temp=ar[i];
					ar[i]=ar[j];
					ar[j]=temp;
				}
			}
		}	
	}
	public static void maxmin( int[] ar){
		int max=0;
		int min=101;
		for(int i=0;i<ar.length;i++){
			 if(ar[i]>max){
				 max=ar[i];
			 }
			 else if(ar[i]<min){
				 min=ar[i];
			 }
			}	
		System.out.print("최고점:"+max+","+"최저점:"+min);
	}
	public static int hap(int[] ar){
		int hap=0;	
		for(int i=1;i<ar.length-1;i++){
			hap+=ar[i];
		}
		return hap;
	}
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		int max=0;
		int min=101;
		int temp=0;
		int hap=0;
		int[] ar = new int[10];
		for(int i=0;i<ar.length;i++){
			System.out.print("점수 입력"+(i+1));
		 ar[i]=key.nextInt();
		}
		input(ar);
		System.out.println("====점수 크기순 정렬 출력====");
		for(int mn:ar){
				System.out.print( mn+" ");
			}
		System.out.println();
		for(int i=1;i<ar.length-1;i++){
			hap+=ar[i];
		}
		maxmin(ar);
		System.out.println();
		System.out.print("최고점,최저점 제외 합:"+hap(ar));
	}
}