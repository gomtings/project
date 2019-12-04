
public class week04 {
	public static void main(String[] args){
//A
	int a=3;
	int j=6;
	int sum=0;
	sum=(++a*j++)+a++;
	System.out.println(sum);
	
	//------------------------
//B
	int b=11;
	int i=4;
	int sum1=0;
	sum1=--b*(b++%++i);
	System.out.println(sum1);
	}
}
