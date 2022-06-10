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
	int w , h; cin >> w >> h;
	int k ; cin >> k;
	int an = INT_MIN;
	vi t (k);

	for (int i = 0; i < k; i++) {
		cin >> t[i];
	}
	an = max(an , h * (t[k - 1] - t[0]));
	cin >> k;
	t = vi (k);
	for (int i = 0; i < k; i++) {
		cin >> t[i];
	}
	an = max(an , h * (t[k - 1] - t[0]));

	cin >> k;
	t = vi(k);
	for (int i = 0; i < k; i++) {
		cin >> t[i];
	}
	an = max(an , w * (t[k - 1] - t[0]));
	cin >> k;
	t = vi (k);
	for (int i = 0; i < k; i++) {
		cin >> t[i];
	}
	an = max(an , w * (t[k - 1] - t[0]));
	cout << an << endl;
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