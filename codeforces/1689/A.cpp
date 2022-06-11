#include "bits/stdc++.h"
using namespace std ;
#define int             long long
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef long double     ld;
#define F               first
#define S               second
#define all(x)			x.begin(),x.end()
#define sz(s)			(int)s.size()
#define bg(x) cerr << #x << " -> " << x << " "

void solve() {
	int a, b, k ;
	cin >> a >> b >> k;
	string sa, sb, c;
	cin >> sa >> sb;
	sort(all(sa)); reverse(all(sa));
	sort(all(sb)); reverse(all(sb));
	int na = 0, nb = 0;
	while (sz(sa) and sz(sb)) {
		// bg(na); bg(nb); cout << endl;
		int grd = sa.back() < sb.back();
		if (grd and na == k) grd = 0;
		if (!grd and nb == k ) grd = 1;
		if (grd) {
			c += sa.back(); sa.pop_back(); na++; nb = 0;
		} else {
			c += sb.back(); sb.pop_back(); na = 0; nb++;
		}
	}
	cout << c << endl;
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}