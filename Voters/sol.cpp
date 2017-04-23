#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6 + 7;

using namespace std;

int a[N];

int main(int argc, char *argv[])
{
	int n[3];
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < n[i]; ++j) {
			int x;
			scanf("%d", &x);
			a[x]++;
		}	
	}

	vector<int> v;

	for (int i = 1; i < N; ++i) {
		if(a[i] > 1) v.pp(i);
	}
	printf("%d\n", v.size());
	for (int i = 0; i < v.size(); ++i) {
		printf("%d\n", v[i]);
	}

	return 0;
}
