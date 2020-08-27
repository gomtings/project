/*******************************************************************************
1. Project Name     : Alarm&&calculator
2. Author	        : Copyright 2020.07 BY Jayden
3. Company	        : PolorBear.
4. A Drafter	  : Lee Sang Woo
5. Homepage	        : non
6. Email	        : tkddn4508@naver.com
7. Phone Number     : 
8. Filename	        : Alarm_main
9. Version	        : 1.2
10. CreatedDate     : 2020/07/23
11. ModifiedDate	: 2019/02/29
12. License	        : 
13. MCU Type	    : 
14. Clock Frequency :
15. Add Source Name : ViewA,ViewB,ViewC,ViewD
16. Compiler	    : Eclipse Compiler
17. SubMenu	        :
*******************************************************************************/
import java.awt.BorderLayout;
import javax.swing.*;
import javax.swing.text.View;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Alarm_main{
	JFrame f;
	ViewA a;
	ViewB b;
	ViewC c;
	ViewD d;
	
	Alarm_main() {
		f = new JFrame("Alarm_main");
		a = new ViewA();
		b = new ViewB();
		c = new ViewC();
		d = new ViewD();
		a.start();
		b.start();
		JTabbedPane pane = new JTabbedPane();
		pane.add("¾Ë¶÷", a);
		pane.add("jewelry", b);
		pane.add("?2", c);
		pane.add("?3", d);
		
		f.add(pane);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setBounds(100 , 100 , 500 , 400);
		f.setVisible(true);
	}

	public static void main(String[] args) {
		new Alarm_main();
	}
}