import java.util.*;
import java.io.*;

public class Main {

	static int check(int[] a, int len, int val){
		int l = 0, r = len - 1;
		int mid = 0, ans = 0, foo = (int) 1e8;
		while(l < r){
			mid = (l + r + 1) / 2;
			int t = Math.abs(val - a[mid]);
			if(t < foo){
				foo = t;
				ans = mid;
			}
			if(a[mid] > val) r = mid - 1;
			else l = mid + 1;
		}
		return ans;
	}

	public static void main(String[] args) {
		// try{
		// 	System.setIn(new FileInputStream(new File("in.txt")));
		// 	System.setOut(new PrintStream(new File("out.txt")));
		// }catch(Exception e){
		// }

		Scanner sc = new Scanner(System.in);
		int n, x, y;
		n = sc.nextInt();
		x = sc.nextInt();
		y = sc.nextInt();
		int[] s = new int[n];
		int[] e = new int[n];
		for (int i = 0; i < n; ++i) {
			s[i] = sc.nextInt();
			e[i] = sc.nextInt();
		}
		int[] v = new int[x];
		int[] w = new int[y];
		for (int i = 0; i < x; ++i) {
			v[i] = sc.nextInt();
		}
		for (int i = 0; i < y; ++i) {
			w[i] = sc.nextInt();
		}

		Arrays.sort(v);
		Arrays.sort(w);

		int ans = (int) 1e8 + 7;

		for (int i = 0; i < n; ++i) {
			if(w[y - 1] < e[i] || v[0] > s[i]) continue;
			//solve
			int l = 0, r = x - 1;
			int t1 = 0, t2 = (int) 1e8;
			while(l <= r){
				int mid = (l + r + 1) / 2;
				if(v[mid] <= s[i]){
					t1 = Math.max(t1, mid);
					l = mid + 1;
				}else{
					r = mid - 1;
				}
			}
			l = 0;
			r = y - 1;
			while(l <= r){
				int mid = (l + r + 1) / 2;
				if(w[mid] >= e[i]){
					t2 = Math.min(t2, mid);
					r = mid - 1;
				}else{
					l = mid + 1;
				}
			}

			ans = Math.min(ans, w[t2] - v[t1] + 1);
		}

		System.out.println(ans);

	}
}
