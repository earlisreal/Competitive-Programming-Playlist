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
	while(k--){
		int a[n];
		int x = -1;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}

		for (int i = n - 2; i >= 0; --i) {
			if(a[i] < a[i+1]){
				x = i;
				break;
			}
		}

		for (int i = n-1; i >= 0; --i) {
			if(a[x] < a[i]){
				swap(a[x], a[i]);
				break;
			}
		}

		for (int i = 0; i < (n-x)/2; ++i) {
			swap(a[x+1+i], a[n-i-1]);
		}


		for (int i = 0; i < n; ++i) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
