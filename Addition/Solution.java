import java.util.*;
import java.io.*;

public class Solution {
	public static void main(String[] args) {
			System.setIn(new FileInputStream(new File("addin.txt")));
			System.setOut(new PrintStream(new File("addout.txt")));
		Scanner sc = new Scanner(System.in);
		int a, b;
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.println(a + b);
	}
}
