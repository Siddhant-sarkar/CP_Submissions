#include "bits/stdc++.h"
using namespace std ;
#define int long long
typedef pair<int, int>  pii;
typedef vector<int>   vi;
typedef vector<pii>   vpii;
typedef long double   ld;
#define F               first
#define S               second
#define pb              push_back
#define sz(a)           (int)a.size()
#define nline     		"\n"
#define all(v)          v.begin(),v.end()
#define fr(a,b)         for(auto &a : b)
#define fo(i,k,n)       for(int i=k; k<n?i<n:i>n; k<n?i+=1:i-=1)

bool t = 0;
void cp() {
	string s ; cin >> s;
	fo(i, 0, sz(s)) {
		if ((s[i] - '0') % 2 == 0) {
			t = 1;
			break;
		}
	}
	if (!t) { cout << "-1" << endl; return;}
	fo(i, 0, sz(s) - 1) {
		int l = s[sz(s) - 1] - '0';
		int n = s[i] - '0';
		if (n % 2 == 0 and n < l) {
			swap(s[i], s[sz(s) - 1]);
			cout << s << endl;
			return;
		}
	}
	fo(i, sz(s) - 2, -1) {
		int l = s[sz(s) - 1] - '0';
		int n = s[i] - '0';
		if (n % 2 == 0 and n > l) {
			swap(s[i], s[sz(s) - 1]);
			cout << s << endl;
			return;
		}
	}


}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TESTS = 1;
	// cin >> TESTS;
	while (TESTS--) {
		cp();
	}
	return 0;
}