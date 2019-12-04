package À¯Çï½º1102;
public class Museum {
static int num=0;
static int carr=0;
static int pay=0;
static void admission(Object a){
	if( a instanceof child){
		
		num++;
		if(((child) a).getage()<=4){
			carr++;
		}else{		
		}
	}else if(a instanceof Person){
		num++;
		pay=pay+1000;
	}else{
	}
}
static int getVisitor(){
	return num;
}
static int getAdmissionfee(){
	return pay;
}
static int getBabycarriage(){
	return carr;
}
}
