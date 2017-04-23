#include <bits/stdc++.h>

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
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n + 7];
	int b[n + 7];
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &b[i]);
	}
	a[0] = a[n + 1] = b[0] = b[n+1] = 0;

	sort(a + 1, a+n+1);
	sort(b + 1, b+n+1);

	int maxa = a[n], maxb = b[n];
	int maxn = max(maxa, maxb);

	int ans = maxa + maxb;
	int foo = k;

	/* printf("ans -> %d\n", ans); */

	for (int i = 1; i <= n; ++i) {
		if(foo < 1)break;
		if(b[i] < a[n + 1 - i]){
			int bar = max(b[i], a[n - i]);
			ans = min(ans, maxn + bar);
		}
		foo--;
	}

	foo = k;
	for (int i = 1; i <= n; ++i) {
		if(foo < 1)break;
		if(a[i] < b[n + 1 - i]){
			ans = min(ans, maxn + max(a[i], b[n - i]));
		}
		foo--;
	}

	printf("%d\n", ans);

	return 0;
}
