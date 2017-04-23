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
	int x[n], y[n];
	x[0] = a[0];
	y[0] = a[n-1];
	for (int i = 1; i < n; ++i) {
		x[i%n] = min(x[i-1] + a[i], a[i] + y[i-1]);
		y[i%n] = x[i-1];
	}
	if(n == 1)printf("%d\n", a[0]);
	else printf("%d\n", min(x[n-1], y[n-1]));
	return 0;
}
