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

bool check(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l < r){
		int sum = a[l] + a[r];
		if(sum == x)return true;
		if(sum > x)r--;
		else l++;
	}
	return false;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}

	sort(a, a+n);

	int ans = 0;
	for(int i = 0; i < n; ++i){
		int x = a[i] * 2;
		if(check(a, n, x))ans++;
	}
	printf("%d\n", ans);
	return 0;
}
