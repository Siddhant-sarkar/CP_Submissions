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
	int n ; cin >> n;
	vi arr(n);
	for (auto &x : arr) cin >> x;
	sort(all(arr));
	for (int i = n - 1, j = 0; j < n / 2; j++, i--) {
		cout << arr[i] << " " << arr[0] << endl;
	}
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		cout << endl;
		solve();
	}
	return 0;
}