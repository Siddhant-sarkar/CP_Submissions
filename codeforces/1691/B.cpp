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
template<typename... T>
void rd(T&... args) {
	((cin >> args), ...);
}
template<typename... T>
void wr(T&&... args) {
	((cout << args ), ...);
}
int n, i;
set<int> st;
vi ar, br;
void _runtimeTerror_() {
	rd(n);
	i = 0;
	ar = vi(n);
	br = vi(n);
	fr(a, ar) rd(a);
	bool ans = 1;
	while (i < n) {
		int j = i;
		while ( j < n - 1 and ar[j + 1] == ar[j])
			j++;
		if (i == j) {
			ans = 0;
			break;
		}
		fo(k, i, j + 1 ) {
			br[k] = (k == i ? j + 1 : k);
		}
		i = j + 1;
	}
	if (ans) {
		fr(a, br)
		cout << a << " ";
	} else {
		cout << -1 << endl;
	}
	return;
}


int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TESTS = 1;
	cin >> TESTS;
	while (TESTS--) {
		_runtimeTerror_();
		cout << endl;
	}
	return 0;
}