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
	int n , m , idx = 0 , t = 0;
	cin >> n >> m;
	vi mm(m);
	fr(x , mm) cin >> x;
	t = mm[0] - 1;
	fo(i, 0, m - 1) {
		if (mm[i] > mm[i + 1] ) {
			t += n - mm[i] + mm[i + 1];
		} else {
			t += mm[i + 1] - mm[i];
		}
	}
	cout << t << endl;
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