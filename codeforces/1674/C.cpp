#include "bits/stdc++.h"
using namespace std ;
#define int             long long
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef vector<pii>     vpii;
typedef long double     ld;
#define F               first
#define S               second
#define pb              push_back
#define sz(a)           (int)a.size()
#define nline           "\n"
#define all(v)          v.begin(),v.end()
#define fr(a,b)         for(auto &a : b)
#define fo(i,k,n)       for(int i=k; k<n?i<n:i>n; k<n?i+=1:i-=1)
int pwer(int a, int b) {
	int ans = 1;
	while (b) {
		if (1 & b)
			ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}
void _runtimeTerror_() {
	string s, t; cin >> s >> t;
	int cnt = 0;
	fr(a, t) { cnt += (a == 'a'); }

	if (t == "a") {
		cout << 1 << endl;
	}
	else if (cnt >= 1) {
		cout << -1 << endl;
	}  else {
		cout << pwer(2, sz(s)) << endl;
	}
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TESTS = 1;
	cin >> TESTS;
	while (TESTS--) {
		_runtimeTerror_();
	}
	return 0;
}