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

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = n-4; i >= 0; --i) {
		a[i] += min(a[i+1], min(a[i+2], a[i+3]));
	}
	int ans = a[0];
	for (int i = 0; i < 3; ++i) {
		ans = min(ans, a[i]);
	}
	printf("%d\n", ans);
	return 0;
}
