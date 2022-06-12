#include"bits/stdc++.h"
using namespace std;
int p[10005], took[1005], n;
void solve() {
	int n , l; cin >> n >> l;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (i > 0)sum += p[i];
	}
	int an = sum - (l - p[0]) ;
	cout << (an < 0 ? 0 : an) << endl;
}
int main() {
	int t ;
	cin >> t;
	while (t--) {
		solve();
	}
}