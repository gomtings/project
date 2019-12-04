public class animal {
	private String name;
	
	animal(){
		this("anonymous");
	}
	animal(String name){
		this.name=name;
	}
	public void setname(String name) {
		this.name=name;
	}
	public String getname() {
		return name;
	}
	public void sound() {
		System.out.print("炼侩洒");
	}
	public String reaction(Object a) {
		if(a instanceof cat) {
			return "cat 部府郴府绊";
		}
		if(a instanceof dog) {
			return "dog 部府棵府绊";
		}
		return "animal 部府如甸";
	}
	public String toString() {
		return getname();
	}
}
class cat extends animal{
	cat(){
		this("anonymous");
	}
	cat(String name){
		super(name);
	}
	public void sound() {
		System.out.print("具~克");
	}
}
class dog extends animal{
	private static int count=0;
	dog(){
		this("anonymous");
		count++;
	}
	dog(String name){
		super(name);
		count++;
	}
	public void sound() {
		for(int i=0;i<=(int)(Math.random()*5+1);i++) {
		System.out.print("港港"+" ");	
		}
	}
	public static int getcountdog() {
		return count;
	}
}