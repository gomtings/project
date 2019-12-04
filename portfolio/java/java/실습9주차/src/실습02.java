import java.util.*; //난수 생성을 위한 패키지 포함
public class 실습02 {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		int[] dim;  //배열 선언
		int size;   //배열 크기
		
		System.out.print("배열 크기를 입력하세요 : ");
		size = key.nextInt();
		dim=new int[size];    //입력 받은 크기만큼 배열 생성
		for(int i=0; i<dim.length;i++)
		    //10~100사이의 난수를 생성하여 배열 i번째에 저장
			dim[i]= (int)(Math.random() * 91+ 10);   
		
		for(int temp : dim)   //foreach 를 사용한 배열 원소 출력
			System.out.println(temp); 
	}
}
