import java.io.*;
	public class file04 {
		public static void main(String[] args) throws IOException{
			FileInputStream in = null;
			FileOutputStream out = null;
			int str;
			try {
				in = new FileInputStream("out_a.txt");
				while((str = in.read()) !=-1){
					System.out.print((char)str+" ");
					}
			}finally {
				in.close();
				System.out.println("프로그램 을 종료 합니다.");
			}
		}
	}
	/*
	while((str = out.read()) !=-1){
					System.out.print((char)str+" ");
					}
	do{
	str=out.read();
	System.out.print((char)str+" ");
}while(str!=-1);
	*/