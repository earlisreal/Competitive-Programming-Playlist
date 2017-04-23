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
	char c;
	cin >> n;
	cin.ignore();
	set<string> s;
	vector<string> v;
	string input = "";
	for (int i = 0; i < n; ++i) {
		string str;
		getline(cin, str);
		input += str +" ";
	}

	for (int i = 0; i < input.length(); ++i) {
		input[i] = tolower(input[i]);
		if(ispunct(input[i])){
			input.erase(input.begin() + i);
			--i;
		}
	}

	string foo = "";
	for (int i = 0; i < input.length(); ++i) {
		/* if(ispunct(input[i]))continue; */
		if(input[i] == ' '){
			if(!foo.empty()){
				s.insert(foo);
				foo.clear();
			}
			continue;
		}
		foo +=input[i];
	}

	cout << s.size() << endl;
	for (set<string>::iterator it = s.begin(); it != s.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
