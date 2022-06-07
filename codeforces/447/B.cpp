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
	((cout << args << " "), ...);
}
string s;
int n , sum = 0;
vi ar(26);
void _runtimeTerror_() {
	rd(s, n);
	fr(x , ar) rd(x);
	fo(i, 0, sz(s)) {
		sum += (i + 1) * ar[s[i] - 'a'];
	}
	fo(i, 1, n + 1) {
		sum += (sz(s) + i) * (*max_element(all(ar)));
	}
	wr(sum);
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