public class T05 {
	public static void printArray(char[]c,String y ){
		System.out.print(y);
		System.out.println();
		for(char cha : c){
			System.out.print(cha+" ");
		}
		System.out.println();
	}
	public static void charSort(char[] c){
		char temp=0;
		for(int i=0;i<c.length-1;i++){
			for(int j=i+1;j<c.length;j++){
				if(c[i]>c[j]){
					temp = c[i];
					c[i]=c[j];
					c[j]=temp;
				}
			}
		}
	}
	public static void main(String[] args){
	char[] ch={'c', 'b', 'w', 'e', 'u', 's'};
	printArray(ch, "���� �� ���ڹ迭: ");
	charSort(ch);
	printArray(ch, "���� �� ���ڹ迭: ");
	}
}
