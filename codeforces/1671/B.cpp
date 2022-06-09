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
	vi ar(n);
	for (auto &it : ar)
		cin >> it;
	pii cnt = { 0, 0 };
	if (ar[n - 1] - ar[0] > n + 1)
		cout << "NO" << endl;
	else cout << "YES" << endl;

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