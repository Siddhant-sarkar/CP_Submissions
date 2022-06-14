#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	int n ; cin >> n;
	int ar[n];
	map<int, int > mp;
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		mp[ar[i]] ++;
	}
	pii cnt = {0, 0};
	for (auto [__, b] : mp)
	{
		if (b & 1) cnt.first++;
		else cnt.second++;
	}
	int ans = 0;
	ans += cnt.first + (cnt.second & 1 ? cnt.second - 1 : cnt.second) ;
	cout << ans << "\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}