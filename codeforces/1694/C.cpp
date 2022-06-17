#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define sz(s) (int) s.size()

int N;
vi ar;

void solve()
{
	cin >> N;
	ar = vi (N);
	for (auto &x : ar) cin >> x;
	int sum = 0 ;
	while (sz(ar) and ar.back() == 0) ar.pop_back();
	for (int i = sz(ar) - 1; i > 0; i--) {
		sum += ar[i];
		if (sum >= 0)
		{
			cout << "NO\n";
			return;
		}
	}
	sum += ar[0];
	if (sum != 0 )
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}