package gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MyListener extends MyFrame implements ActionListener {
	
	MyFrame my = new MyFrame();
	 public void actionPerformed(ActionEvent e) {
         if (e.getSource() == button1) { //�̺�Ʈ�� �߻���Ų ��ü �ĺ�
                panel.setBackground(Color.YELLOW);
         } else if (e.getSource() == button2) {
                panel.setBackground(Color.PINK);
         }
  }
}
