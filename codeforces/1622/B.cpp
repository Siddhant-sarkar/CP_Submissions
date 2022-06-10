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
	int n;
	cin >> n;
	vi ar(n), ans(n + 1, -1); string s;
	vector<pii> t;
	for (auto &it : ar)
		cin >> it;
	cin >> s;
	for (int i = 0; i < n; i++)
		if (s[i] == '0')
			t.push_back({ar[i], i + 1});
	int k = 1;
	sort(t.begin(), t.end());
	for (auto [a, b] : t) {
		ans[b] = k;
		k++;
	}
	// k = n;
	t.clear();
	for (int i = 0; i < n; i++)
		if (s[i] == '1')
			t.push_back({ar[i], i + 1});
	sort(t.begin(), t.end());
	for (auto [a, b] : t) {
		// cout << a << " " << b << endl;
		ans[b] = k;
		k++;
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << " ";
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