import javax.swing.*;

public class jframe{
	//using JFrame to create a really simple GUI
	public static void main(String[] args) {
		JFrame frame = new JFrame("Demo");		
		JLabel label = new JLabel("Hello World",JLabel.CENTER);
		frame.add(label);
		frame.setSize(300,300);
		frame.setVisible(true);
	}
}