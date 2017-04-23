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
	int m;
	scanf("%d", &m);
	int a[m];
	for (int i = 0; i < m; ++i) {
		int x, y;
		scanf("%d %d", &x, &y);
		a[i] = min(x, y);
	}

	sort(a, a+m);
	int ans = 0, foo = 1;
	for (int i = 0; i < m; ++i) {
		if(a[i] >= foo){
			++ans;
			++foo;
		}
	}
	printf("%d\n", ans);
	return 0;
}
