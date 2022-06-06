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
#define fr(a,b)     for(auto &a : b)
#define fo(i,k,n)       for(int i=k; k<n?i<n:i>n; k<n?i+=1:i-=1)
void _runtimeTerror_() {
	int n , k;
	string s;
	cin >>  n >> k >> s;
	while (k--) {
		vi idx;
		fo(i, 0, sz(s)) {
			if (s[i] == 'G' and i - 1 >= 0 and s[i - 1] == 'B') {
				idx.pb(i);
			}
		}
		fr (x, idx) {
			char a = s[x - 1]  ;
			s[x - 1] = s[x];
			s[x] = a;
		}
	}
	cout << s << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TESTS = 1;
	// cin >> TESTS;
	while (TESTS--) {
		_runtimeTerror_();
	}
	return 0;
}