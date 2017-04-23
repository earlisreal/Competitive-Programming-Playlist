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
	string s;
	cin >> s;

	int ans = 1;
	string foo = "" + s[0];
	string sans = foo;
	bool same = true;
	for (int i = 1; i < n; ++i) {
		int len = foo.length();
		int index;
		if(len == 1){
			if(foo[0] == s[i]){
				foo += s[i];
			}else if(i-2 >= 0 && s[i-2] == s[i]){
				foo = s.substr(i-2, 3); 
			}else{
				foo = s[i];
				same = true;
			}
		}else{
			if(same && foo[0] == s[i]){
				foo += s[i];
			}else{
				same = false;
				index = i - len - 1;
				if(index >= 0 && s[index] == s[i]){
					foo = s.substr(index, len + 2);
				}else{
					if(i-2 >= 0 && s[i-2] == s[i]){
						foo = s.substr(i-2, 3);
					}else if(s[i-1] == s[i]){
						foo = s.substr(i-1, 2);
					}else{
						foo = s[i];
						same = true;
					}
				}
			}
		}
		/* printf("i -> %d foo ->", i); */
		/* cout << foo << endl; */
		if(foo.length() > ans){
			ans = foo.length();
			sans = foo;
		}
	}

	cout << ans << endl << sans << endl;
	return 0;

}
