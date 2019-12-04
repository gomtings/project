public class no4 {
	public static void main(String[]args){
		 int x2=0, y2=9;
		  for(int a=0;a<5;a++) {
		   for(int b=0;b<x2;b++) {
		    System.out.print(" ");
		   }
		   for(int b=0;b<y2;b++) {
		    System.out.print("*");
		   }
		   x2++;
		   y2-=2;		   
		   System.out.println();
		  }
		  int x=4, y=1;
		  for(int a=0;a<5;a++) {
		   for(int b=0;b<x;b++) {
		    System.out.print(" ");
		   }
		   for(int b=0;b<y;b++) {
		    System.out.print("*");
		   }
		   x--;
		   y+=2;
		   
		   System.out.println();
		  }
	}
}

