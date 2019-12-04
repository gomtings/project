
public class java01 {
	public static void main(String[] args) {
	int[] dim={5,3,2,8,12,9,30,15,89};
	int temp;

	
	array_print(dim, "=== 배열 원소 출력(정렬 전) ========");
	
	for(int i=0;i<dim.length-1;i++){  
		for(int j=i+1; j<dim.length;j++)	{
			if(dim[i] < dim[j]){  
				temp=dim[i]; 
				dim[i]=dim[j];
				dim[j]=temp;
			}
		}
	}
	

	array_print(dim, "=== 배열 원소 출력(정렬 후) ========");
 } 


public static void array_print(int[] dim, String str){
	System.out.println(str);
	for(int d : dim)
		System.out.print(d + "   "); 
	System.out.println("\n");
}
}
