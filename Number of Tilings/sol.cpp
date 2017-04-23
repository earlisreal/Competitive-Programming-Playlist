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

const int MOD = 1e4;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n + 7];
	int b[n + 7];

	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	b[0] = 0;
	b[1] = 1;
	for (int i = 2; i <= n; ++i) {
		b[i] = (b[i-1] + a[i-1]) % MOD;
		a[i] = (a[i-1] + a[i-2] + b[i-2] * 2) % MOD;
	}

	printf("%d\n", a[n]);

	return 0;
}
