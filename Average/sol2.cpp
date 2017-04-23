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
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &v[i]);
	}

	//SOlution Here

	int ans = 0;
	sort(v.begin(), v.end());
	for (int i = 1; i < n; ++i) {
		for (int j = i-1; j >= 0; --j) {
			int k = (v[i] + v[j]) / 2;
			if(binary_search(v.begin(), v.end(), k)){
				ans++;
				break;
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}
