#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define int long long int
#define sz(s) (int) s.size()
#define F first
#define S second
#define INF 1e18+7

void solve()
{
	int N, M, l = -INF;
	pii a;
	cin >> N >> M;
	vpii crd = {{0, 0}, {N - 1, 0}, {0, M - 1}, {N - 1, M - 1}};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int k	; cin >> k ;
			if (k > l)
			{
				l = k;
				a = {i, j};
			}
		}
	}
	l = -INF;
	// cout << a.F << " " << a.S << endl;
	for (auto & [x, y] : crd)
	{
		int m = ((abs(a.F - x) + 1) * (abs(a.S - y) + 1));
		l = max(l, m);
	}

	cout << l << "\n";
}
int32_t main() {
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}