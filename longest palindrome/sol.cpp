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

const int N = 5e3 + 7;


int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;

	int dp[n+1][n+1];

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j) {
			dp[i][j] = 0;
		}
	}

	int ans = 0, index = 0;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if(s[i-1] == s[j-1]){
				dp[i][j] = dp[i-1][j+1] + 1;
				if(dp[i][j] > ans){
					ans = dp[i][j];
					index = j-1;
				}
			}
		}
	}

	printf("%d\n", ans);
	cout << s.substr(index, ans);

	return 0;
}
