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
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	int ans = 0;

	sort(a, a+n);
	for (int i = 0; i < n - 1; ++i) {
		int j;
		for (j = i + 1; j < n; ++j) {
			if(abs(a[i] - a[j]) >= k) break;
		}
		ans += n - j;
	}

	/* for (int i = 0; i < n; ++i) { */
	/* 	for (int j = 0; j < n; ++j) { */
	/* 		if(abs(a[i] - a[j] >= k))ans++; */
	/* 	} */
	/* } */

	printf("%d\n", ans);

	return 0;
}
