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
	pair<int, int> p[n];
	for (int i = 0; i < n; ++i) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		p[i] = mp(c+b, a);
	}
	sort(p,p+n);
	int ans = 0, t = 0;
	for (int i = n-1; i >= 0; --i) {
		ans = max(ans, t + p[i].fs + p[i].sc);
		t += p[i].sc;
	}
	printf("%d\n", ans);
	return 0;
}
