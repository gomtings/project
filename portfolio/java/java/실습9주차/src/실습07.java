
public class �ǽ�07 {
	public static void main(String [] args){
		int max =0;
		int min = 1;
		int min1=-1,max1=-1;
		int [] arry = new int [7];
		System.out.println("===�迭 ���� ���===");
		for(int z =0;z<arry.length;z++){
			arry[z]=(int)(Math.random()*80+10);
			System.out.print(arry[z]+" ");
			 if(arry[z]>max){
				 max = arry[z];
				 min1 = z ;
			 }
			 else{
				 min = arry[z];
				 max1 = z ;
			 }
		} // for ���� 
		System.out.println();
		System.out.println("���� ū ��: "+ max   +"    "  + "index"+max1);
		System.out.println("���� ���� ��: "+ min  +"    "   + "index"+min1);
		
	}

}
