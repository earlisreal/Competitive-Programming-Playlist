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

const int N = 1e6 + 7;

ll a[N];
ll b[N];
ll dp[N];

ll f(int i, int j, int n){
	if(i == j) return a[i];
	else if(i < j){
		if(j - i == 1) return a[i] + a[j];
		return a[i] + (dp[j-1] - dp[i+1] + b[i+1]) + a[j];
	} 
	else if(i > j){
		if(i == n){
			return a[i] + dp[j-1] + a[j];
		}else{
			return a[i] + (dp[n] - dp[i+1] + b[i+1] + dp[j-1]) + a[j];
		}
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
	/* for (int i = 1; i <= n; ++i) { */
	/* 	printf("%I64d ", dp[i]); */
	/* } */
	/* puts(""); */

	ll ans = a[0];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			ll t = f(i, j, n);
			ans = max(ans, t);
			/* printf("i -> %d j -> %d t -> %d\n", i, j, t); */
		}
	}
	printf("%I64d", ans);
	return 0;
}
