package t04;
 class fruit {
	public String me(){
		return "���� ����";
	}
}
 class apple extends fruit{
	 @Override
	 public String me(){
			return "���� ���";
		} 
 }
 class grape extends fruit{
	 @Override
	 public String me(){
			return "���� ����";
		}
 }
 class pear extends fruit{
	 @Override
	 public String me(){
			return "���� ��";
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
 
