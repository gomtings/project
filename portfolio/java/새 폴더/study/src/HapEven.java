
public class HapEven {
	public static void main(String[] args){
		int hap1=0;
		int hap2=0;
		for(int a=0;a<=100;a++){
		if (a%2==0){
			hap1+=a;
		}
		else
			hap2+=a;
		}
		System.out.println("È¦¼ö ÇÕ : " + hap1 + "\nÂ¦¼ö ÇÕ : " + hap2);
	}

}
