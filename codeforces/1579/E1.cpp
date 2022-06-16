#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define sz(s) (int) s.size()

void solve()
{
	int n ; cin >> n;
	vi ar(n);
	for (auto & it : ar) cin >> it;
	deque<int> dq;
	for (auto x : ar)
	{
		if (!sz(dq)) dq.push_back(x);
		else
		{
			if (x < dq.front())
				dq.push_front(x);
			else
				dq.push_back(x);
		}
	}
	for (auto it : dq) cout << it << " ";
	cout << "\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}