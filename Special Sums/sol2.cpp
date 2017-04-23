#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const long long N = (long long)1e18 + 7;

int a[1000000 + 7];
int b[1000000 + 7];
long long dp[1000000 + 7];

long long solve(int n, int l, int r){
	if(l == r) return a[l];
	if(l < r) return a[l] + a[r] + dp[r-1] - dp[l];
	else{
		/* ll t = 0; */
		/* if(r > 0) t = dp[r-1]; */
		return a[l] + a[r] + dp[n] - dp[l] + dp[r-1];
	} 
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%I64d", &a[i]);
	}
	for (int i = 1; i <= n; ++i) {
		scanf("%I64d", &b[i]);
		dp[i] = dp[i-1] + b[i];
	}

	/* dp[0] = b[0]; */
	/* for (int i = 0; i < n; ++i) { */
	/* } */


	/* for (int i = 0; i < n; ++i) { */
	/* 	printf("%I64d ", dp[i]); */
	/* } */
	/* puts(""); */

	long long ans = a[1];

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			ll x = solve(n, i, j);
			if(x > ans) ans = x;
		}
	}

	printf("%I64d", ans);

	return 0;
}
