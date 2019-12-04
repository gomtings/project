package t04;
public class contest {
   public static void main(String[] args){
	   consumer con = new consumer();
	   con.setaccount("12345678");
	   con.setcon_momey(50000);
	   con.incon_money(30000);
	   con.outcon_money( con );
	}
}
