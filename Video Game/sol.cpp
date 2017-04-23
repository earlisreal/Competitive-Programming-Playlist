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
	int n, h;
	scanf("%d %d", &n, &h);
	int a[n + 7];
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	int x, p = 1;
	bool foo = false;
	scanf("%d", &x);
	while(x != 0){
		if(x == 1){
			if(p > 1) p--;
		}
		if(x == 2){
			if(p < n) p++;
		}
		if(x == 3){
			if(!foo){
				if(a[p] > 0){
					a[p]--;
					foo = true;
				}
			}
		}
		if(x == 4){
			if(foo){
				if(a[p] < h){
					a[p]++;
					foo = false;
				}
			}
		}
		scanf("%d", &x);
	}

	for (int i = 1; i <= n; ++i) {
		printf("%d ", a[i]);	
	}
	return 0;
}
