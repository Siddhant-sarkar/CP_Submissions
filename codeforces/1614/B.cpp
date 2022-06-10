#include "bits/stdc++.h"
using namespace std ;
#define int             long long
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef long double     ld;
#define F               first
#define S               second
#define bg(x) cerr << #x << " -> " << x << "\n"

void _runtimeTerror_() {
	int n ; cin >> n;
	vector<pii> ar, dp;
	for (int i = 0; i < n; i++) {
		int t ; cin >> t;
		ar.push_back({t, i + 1});
	}
	sort(ar.begin(), ar.end(), [](pii a, pii b) {return a.F > b.F;});
	pii dx = {1, 0};
	int dist = 0;
	vi pos(n + 1);
	for (auto [a, b] : ar) {
		if (dx.S == 2) {
			dx.F ++;
			dx.S = 0;
		}
		pos[b] = dx.S == 1 ? -dx.F : dx.F;
		dist += 2 * a * abs(dx.F);
		dx.S++;
	}
	cout << dist << "\n";
	for (auto it : pos) {
		cout << it << " ";
	}
	cout << endl;

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