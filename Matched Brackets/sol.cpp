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
	int maxd = 0, maxl = 0, ans1 = 1, ans2 = 1;
	int fd = 1, fl = 1, count = 0, len = 0;
	for (int i = 1; i <= n; ++i) {
		int x;
		scanf("%d", &x);

		if(len == 0) fl = i;

		len++;

		if(x == 1){
			count++;
			fd = i;
		}else{
			if(count > maxd){
				maxd = count;
				ans1 = fd;
			}
			count--;
		}

		if(count == 0){
			if(len > maxl){
				maxl = len;
				ans2 = fl;
			}
			len = 0;
		}
	}

	printf("%d %d %d %d", maxd, ans1, maxl, ans2);
	return 0;
}
