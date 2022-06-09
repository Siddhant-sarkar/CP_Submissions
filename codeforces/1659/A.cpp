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
	int n , a , b;
	cin >> n  >> a >> b;
	int k = a / (b + 1) , l = a % (b + 1);
	for (int i = 0; i < l; i++) cout << string(k + 1, 'R') << "B";
	for (int i = l; i < b; i++ ) cout << string(k, 'R') << 'B';
	cout << string(k, 'R') << endl;
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