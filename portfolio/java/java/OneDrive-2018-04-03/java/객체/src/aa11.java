import java.util.Scanner;
class Word{
	private String eng;
	private String kor;
	 Word(String eng ,String kor){
		 this.eng=eng;
		 this.kor=kor;
	 }
	static void engtokor(String c , Word[] obj){
		for(int i=0;i<obj.length;i++){
			if(obj[i].eng.equals(c)){
				int x=i;
			System.out.println("�ܾ��� ����:"+obj[x].kor);
			break;
			}
		}
	 }
		static void kortoeng(char eng , Word[] obj){
			for(int i=0;i<obj.length;i++){
				if(eng == obj[i].eng.charAt(0)){
					int x=i;
				System.out.println("������ �ش��ϴ� �ܾ��:"+obj[x].eng);
				System.out.println("�ܾ��� ����:"+obj[x].kor);
				break;
				}
			}
	 }
}
public class aa11 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		Word[] obj = new Word[5];
		obj[0]=new Word("apple" ,"���");
		obj[1]=new Word("bear" ,"��");
		obj[2]=new Word("car" ,"�ڵ���");
		obj[3]=new Word("deliver" ,"���");
		obj[4]=new Word("effect" ,"ȿ��");
		System.out.println("�ܾ �Է� �� �ּ���.");
		Word.engtokor(key.next() ,obj);
		System.out.println("���ڸ� �Է� �� �ּ���.");
		Word.kortoeng(key.next().charAt(0) ,obj);
		
	}
}
