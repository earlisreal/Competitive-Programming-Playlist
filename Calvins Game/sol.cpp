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

const int INF = 1e9;
const int N = 1e6 + 7;

int y[N];
int x[N];
int a[N];

int main(int argc, char *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k);


	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}

	x[k] = 0;
	x[k+1] = a[k+1];
	for (int i = k+2; i <= n; ++i) {
		x[i] = a[i] + max(x[i-1], x[i-2]);
	}

	y[1] = 0;
	y[2] = a[1];
	for (int i = 3; i <= n; ++i) {
		y[i] = max(y[i-1] + a[i-1], y[i-2] + a[i-2]);
	}

	/* for (int i = 1; i <= n; ++i) { */
	/* 	printf("%d ", x[i]); */
	/* } */
	/* printf("\n"); */
	/* for (int i = 1; i <= n; ++i) { */
	/* 	printf("%d ", y[i]); */
	/* } */
	/* printf("\n"); */

	int ans = y[k];
	for (int i = k+1; i <= n; ++i) {
		ans = max(ans, x[i] + y[i]);
	}
	printf("%d\n", ans);

	return 0;
}
