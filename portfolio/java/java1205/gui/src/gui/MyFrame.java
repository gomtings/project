package gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

 class MyFrame extends JFrame {

	 private JButton button1;
	 private JButton button2;
	 private JPanel panel;
	 
	 public MyFrame(){
		 this.setSize(300,200);
		 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		 this.setTitle("이벤트 예제");
		 panel = new JPanel();
		 button1 = new JButton();
		 button1.addActionListener(new MyListener()  );
         panel.add(button1);
         button2 = new JButton("핑크색");
         button2.addActionListener(new MyListener() );
         panel.add(button2);
         this.add(panel);
         this.setVisible(true);


	 }
}
