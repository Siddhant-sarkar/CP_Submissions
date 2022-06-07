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
int n , idx = -1 , cnt = 0;
vi ar;
void _runtimeTerror_() {
	rd(n);
	ar = vi(n);
	fr(x, ar) rd(x);
	fo(i, 0, n - 1) {
		if (ar[i] > ar[i + 1]) {
			vi t = vi(ar.begin() + i + 1, ar.end());
			t.insert(t.end(), ar.begin() , ar.begin() + i + 1);
			// fr(x , t)
			// wr(x);

			sort(all(ar));
			if (t ==  ar) {
				wr(n - i - 1);
			}
			else {
				wr(-1);
			}
			return;
		}
	}
	wr(0);
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