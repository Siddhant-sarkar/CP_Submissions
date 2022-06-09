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
void _runtimeTerror_() {
	int n, k  , ans = INT_MAX;
	string s;
	cin >> n >> k >> s;
	vi ar(n + 1);
	fo(i, 0, n) {
		ar[i + 1] = ar[i] + (s[i] == 'W');
	}
	// fr(i, ar)
	// cout << i << " ";
	// cout << endl;
	fo(i, 0, ((n - k) == 0 ? 1 : n - k + 1)) {
		ans = min(ans, abs(ar[i + k] - ar[i]));
		// cout << ans << endl;
	}
	cout << ans << endl;

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