import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) {
		// try{
		// 	System.setIn(new FileInputStream(new File("in.txt")));
		// 	System.setOut(new PrintStream(new File("out.txt")));
		// }catch(Exception e){
		// }

		final int N = (int)1e8 + 7;

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		int[] cache = new int[N];
		for (int i = 0; i < n; ++i) {
			a[i] = sc.nextInt();
			cache[a[i]]++;
		}

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++i) {
				int k = a[i] * 2;
				if(a[j] >= k) continue;
				int x = k - a[j];
				if(x == a[j]){
					if(cache[x] > 1){
						ans++;
						break;
					}
				}else{
					if(cache[x] > 0)ans++;
					break;
				}
			}
		}
		System.out.println(ans);
	}
}
