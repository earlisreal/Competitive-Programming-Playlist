import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		int[] a = new int[m];
		for (int i = 0; i < m; ++i) {
			int x, y;
			x = sc.nextInt();
			y = sc.nextInt();
			a[i] = Math.min(x, y);
		}

		Arrays.sort(a);

		int foo = 1, ans = 0;
		for (int i = 0; i < m; ++i) {
			if(a[i] >= foo){
				++ans;
				++foo;
			}
		}

		System.out.println(ans);
	}
}
