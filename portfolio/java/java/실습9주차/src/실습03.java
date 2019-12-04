import java.util.*; //난수 생성을 위한 패키지 포함
public class 실습03 {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		int[]  dim={12, 45, 23, 67, 34, 77, 9};
		int data, index=-1;
		
		System.out.print("검색하고자 하는 값을 입력하세요 :  " );
		data=key.nextInt();
		
		for(int i=0; i<dim.length;i++){
			if(data == dim[i]){
				index=i;break;
			}
		}
		
		if( index >= 0  &&  index < dim.length)
			System.out.println("검색하고 하는 값은 " + (index+1) + " 번째에 있습니다");
		else
			System.out.println( "입력 값 " + data + " 은 존재하지 않습니다");
		}
}
