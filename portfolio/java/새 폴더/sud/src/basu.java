
public class basu {
	public static void main(String[] args){
		int cnt=0;  //�� �࿡ ��µ� ���� ���
		for(int i=1; i<=100; i++){			
			if(i%5==0)
				continue; 
			else{
				++cnt;  
				System.out.print((cnt%5==0)?" "+ i+"\n" : i +"   "); 
			}
		}
	}
}

