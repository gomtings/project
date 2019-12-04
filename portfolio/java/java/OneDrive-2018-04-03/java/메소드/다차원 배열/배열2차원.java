
public class 배열2차원 {
	public static void main(String [] args){
		int [][] arry = new int [3][5];
  for(int a=0;a<3;a++){
	  for(int b=0;b<5;b++){
		  arry[a][b] = (int)(Math.random()*100+1);
		  System.out.println(arry[a][b]);
	  }
  }
  System.out.println("---------------------------");
  int max= 0;
  for(int c=0;c<3;c++){
	  for(int d=0;d<5;d++){
		  if(max<arry[c][d]){
			  max = arry[c][d];
		  }
	  }
  }
	}

}
