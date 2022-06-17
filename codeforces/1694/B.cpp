#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define sz(s) (int) s.size()
int N;
string S;

void solve()
{
	cin >> N >> S;
	int ans = sz(S);
	for (int i = 1; i < N; i++)
	{
		if (S[i] != S[i - 1])
			ans += i;
	}
	cout << ans << "\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}