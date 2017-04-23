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
	int b[n];
	ll bf[n];
	ll bb[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	ll temp = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &b[i]);
		bf[i] = b[i] + temp;
		temp = bf[i];
	}
	bb[n-1] = b[n-1];
	for (int i = n-2; i >= 0; --i) {
		bb[i] = b[i] + bb[i+1];
	}

	ll ans = a[0];
	ll minS = 1e18, maxS = a[0];
	for (int i = 0; i < n; ++i) {
		if(a[i] > ans) ans = a[i];

		if(i > 0){
			ans = max(ans, maxS + bf[n-1] - bf[i] + a[i]);
			ans = max(ans, a[i] + bf[i-1] - minS);
		}

		if(i < n-1){
			minS = min(minS, bf[i] - a[i]); 
			maxS = max(maxS, bb[0] - bb[i] + a[i]);
		}
	}

	cout << ans;

	return 0;
}
