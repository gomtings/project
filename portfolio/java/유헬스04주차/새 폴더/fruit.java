package t04;
 class fruit {
	public String me(){
		return "나는 과일";
	}
}
 class apple extends fruit{
	 @Override
	 public String me(){
			return "나는 사과";
		} 
 }
 class grape extends fruit{
	 @Override
	 public String me(){
			return "나는 포도";
		}
 }
 class pear extends fruit{
	 @Override
	 public String me(){
			return "나는 배";
		}
 }
 
 class test {
	 public static void main(String[] args){
		 fruit[] f = new fruit[4];
		 f[0]=new fruit();
		 f[1]=new apple();
		 f[2]=new grape();
		 f[3]=new pear();
		 for(int i=0;i<f.length;i++){
		 System.out.println( f[i].me() );
		 }
	 }
 }
 
