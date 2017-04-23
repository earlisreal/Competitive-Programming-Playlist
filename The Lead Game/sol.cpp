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
	int ans, ans2 = 0;
	int x = 0, y = 0;
	while(n--){
		int a, b;
		scanf("%d %d", &a, &b);
		x += a;
		y += b;
		int foo = abs(x-y);
		if(x > y){
			if(foo > ans2){
				ans = 1;
			}
		}else{
			if(foo > ans2){
				ans = 2;
			}
		}
		ans2 = max(foo, ans2);
	}
	printf("%d %d", ans, ans2);
	return 0;
}
