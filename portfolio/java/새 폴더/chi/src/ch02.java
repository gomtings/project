public class ch02 {
	public static void main(String[] args){
		int z=0;
		int x;
		int v;
		for(x=1;x<=6;x++){
			for(v=1;v<=6;v++){
				if((x+v==6)){
					z++;
					System.out.println(x+"+"+v+"°æ¿ì:"+z);
				}	
			}
		}	
	}
}
