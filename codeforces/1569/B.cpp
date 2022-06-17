#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define sz(s) (int) s.size()
int N;
string S, ans[50];
void solve()
{
	cin >> N >> S;
	vi id ;
	for (int i = 0; i < N; i++)
	{
		ans[i] = string(N, '=');
		ans[i][i] = 'X';
		if (S[i] == '2') id.push_back(i);
	}

	if (sz(id) == 1 || sz(id) == 2)
		cout << "NO\n";
	else
	{
		cout << "YES\n";
		for (int i = 0; i < sz(id); i++)
		{
			int u = id[i], v = id[(i + 1) % sz(id)];
			ans[u][v] = '+';
			ans[v][u] = '-';
		}
		for (int i = 0; i < N; i++)
			cout << ans[i] << "\n";
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}