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
void _runtimeTerror_() {
	int n ;
	cin >> n;
	vi arr(n) , sr;
	fr(x , arr) cin >> x;
	sr = arr;
	sort(all(sr));
	pii p = { -1, -1};
	if (is_sorted(all(arr))) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
		return;
	}
	fo(i, 0, n) {
		if (arr[i] != sr[i]) {
			if (p.F == -1)
				p.F = i;
			else
				p.S = i;
		}
	}
	reverse(arr.begin() + p.F, arr.begin() + p.S + 1);
	if (is_sorted(all(arr))) {
		cout << "yes" << endl;
		cout << p.F + 1 << " " << p.S + 1 << endl;
	} else {
		cout << "no" << endl;
	}

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