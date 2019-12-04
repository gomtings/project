class aaa{
	public int  arr(){			
		int a=10;
		return  a;
			}
	public void aa(int s){
		int a=101;
		int d = a-s;
		System.out.print(d);
	}
}
public class TEST1 {		
	public static void main(String[]  args){
		int [] arry ={3,4,2,1,23,4,5,7};
		aaa obj = new aaa();
		int x=obj.arr();
		obj.aa(2);
		//System.out.println(  );
	}
}
