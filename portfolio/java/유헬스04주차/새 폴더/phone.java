package t04;

 class phone {
	
String maker;
int price;
String type;

public phone() {
this("",0,"");	
}
public phone(String maker) {
this(maker,0," ");	
}
public phone(String maker,int price,String type) {
this.maker=maker;
this.price=price;
this.type=type;
}
public void setmaker(String maker) {
	this.maker=maker;
}
public String getmaker() {
	return maker;
}
public void setprice(int price) {
	this.price=price;
}
public int getprice() {
	return price;
}
public void settype(String type) {
	this.type=type;
}
public String gettype() {
	return type;
}
public String toString() {
	String str="������: "+maker+"����: "+price+"��� Ÿ��: "+type;
return 	str;
}
}

 class smartphone extends phone{
	 int  memory;
	 boolean hasbluetooth;
	 public smartphone(String maker,int price,String type,int memory,boolean hasbluetooth) {
		 super(maker,price,type);
		 this.memory=memory;
		 this.hasbluetooth=hasbluetooth;
	 }
		 
		 public void setmemory(int memory) {
			 this.memory=memory;
		 }
		 public int getmemory() {
			 return memory;
		 }
		 public void sethasbluetooth(boolean hasbluetooth) {
			 this.hasbluetooth=hasbluetooth;
		 }
		 public boolean gethasbluetooth() {
			 return hasbluetooth;
		 }
		 public String toString() {
			 String str2=super.toString()+"�޸�:"+memory+"GB"+"������� ��������:"+hasbluetooth;
			 return str2;
		 }
	 }