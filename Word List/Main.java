import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) {
		// try{
		// 	System.setIn(new FileInputStream(new File("in.txt")));
		// 	System.setOut(new PrintStream(new File("out.txt")));
		// }catch(Exception e){
		// }

		Scanner sc = new Scanner(System.in);
		TreeSet set = new TreeSet<String>();
		int n = sc.nextInt();
		sc.nextLine();
		String s = "";
		while(n-- > 0){
			String str = sc.nextLine();
			s += str +" ";
		}

		String input = "";

		for (int i = 0; i < s.length(); ++i) {
			if(s.charAt(i) == '.' ||
				s.charAt(i) == ',' ||
				s.charAt(i) == ';' ||
				s.charAt(i) == ':' ||
				s.charAt(i) == '\''){
				continue;
				}
			input += Character.toLowerCase(s.charAt(i));
		}

		String foo = "";
		for (int i = 0; i < input.length(); ++i) {
			if(input.charAt(i) == ' '){
				if(!foo.isEmpty()){
					set.add(foo);
					foo = "";
				}
				continue;
			}
			foo += input.charAt(i);
		}

		System.out.println(set.size());

		// System.out.println(input);

		for (Iterator<String> it = set.iterator(); it.hasNext();) {
			System.out.println(it.next());
		}
	}
}
