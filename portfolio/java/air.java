package À¯Çï½º0530;

public class air {
	String product;
	 String model;
	 int our;
	 private  static int planes;
	 
	 air(){
		    this("", "", 0);
	 }
	 
	 air(String p, String m, int o){
		 this.product = p;
		 this.model = m;
		 this.our = o;
		 planes++;
		 
	 }
	 

	static int getPlanes() {
		 return planes;
	 }
	 
	 public String getModel(){
		 return this.model;
	 }
	public String getMaxpalnes(air[] obj){
		air[] temp;
	    for(int i=0; i<obj.length;i++){
	    	if(obj[i]>obj[i+1]){
	    		temp=obj[i];
	    	}
	    }
	    return temp;
	}

	 public String getProduct() {return product;}
	 public void setProduct(String product)
	 {this.product = product;}
	 

	 
	 public int getPeople() {return our;}
	 public void setPeople(int  our)
	 {this.our = our ;}
	 
	}

