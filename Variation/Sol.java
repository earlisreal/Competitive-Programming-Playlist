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
		int n = sc.nextInt();
		int k = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; ++i) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		int ans = 0;
		for (int i = 0; i < n - 1; ++i) {
			int j;
			for (j = i+1; j < n; ++j) {
				if(a[j] - a[i] >= k) break;
			}
			ans += n - j;
		}
		System.out.println(ans);
	}
}
