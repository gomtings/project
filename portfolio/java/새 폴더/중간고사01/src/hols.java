
public class hols {
	public static void main(String[] args){
		int s=0,h=0;//È¦¼ö,Â¦¼ö ÇÕ º¯¼ö
		for(int a=1;a<=100;a++){
			if(a%2==0){// a¸¦ 2·Î ³ª´« ³ª¸ÓÁö°¡ 0ÀÌ¸é Â¦¼ö ÆÇº° Á¶°Ç½Ä
				s+=a;//Â¦¼öÀÇ ÇÕ
			}
			else{
				h+=a;//È¦¼öÀÇ ÇÕ
			}
		}
		System.out.print("Â¦¼ö"+s+"È¦¼ö"+h);
	}
}
