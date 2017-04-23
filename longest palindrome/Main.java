import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s = sc.next();

		int[][] dp = new int[5003][5003];
		int ans = 0, index = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if(s.charAt(i-1) == s.charAt(j-1)){
					dp[i][j] = dp[i-1][j+1] + 1;
					if(dp[i][j] > ans){
						ans = dp[i][j];
						index = j-1;
					}
				}
			}
		}
		System.out.println(ans);
		System.out.println(s.substring(index, index+ans));
	}
}
