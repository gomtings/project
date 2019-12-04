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
			System.out.println("단어의 뜻은:"+obj[x].kor);
			break;
			}
		}
	 }
		static void kortoeng(char eng , Word[] obj){
			for(int i=0;i<obj.length;i++){
				if(eng == obj[i].eng.charAt(0)){
					int x=i;
				System.out.println("문자의 해당하는 단어는:"+obj[x].eng);
				System.out.println("단어의 뜻은:"+obj[x].kor);
				break;
				}
			}
	 }
}
public class aa11 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		Word[] obj = new Word[5];
		obj[0]=new Word("apple" ,"사과");
		obj[1]=new Word("bear" ,"곰");
		obj[2]=new Word("car" ,"자동차");
		obj[3]=new Word("deliver" ,"배달");
		obj[4]=new Word("effect" ,"효과");
		System.out.println("단어를 입력 해 주세요.");
		Word.engtokor(key.next() ,obj);
		System.out.println("문자를 입력 해 주세요.");
		Word.kortoeng(key.next().charAt(0) ,obj);
		
	}
}
