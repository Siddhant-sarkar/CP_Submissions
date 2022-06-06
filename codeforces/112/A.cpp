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
#define fr(a,b)     for(auto a : b)
#define fo(i,k,n)       for(int i=k; k<n?i<n:i>n; k<n?i+=1:i-=1)
template<typename... T>
void rd(T&... args) {
	((cin >> args), ...);
}
template<typename... T>
void wr(T&&... args) {
	((cout << args  ), ...);
}
string s, a;
set<char> ss = {'a', 'e', 'i', 'o', 'y', 'u'};
void _runtimeTerror_() {
	rd(s, a);
	for (auto  &t : s) if (t >= 'A' and t <= 'Z') t += 32;
	for (auto  &t : a) if (t >= 'A' and t <= 'Z') t += 32;
	if (s == a)
		wr(0);
	else if (s < a)
		wr(-1);
	else
		wr(1);
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