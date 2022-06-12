#include"bits/stdc++.h"
using namespace std;
#define int long long int
typedef vector<int> vi;
#define all(s) s.begin(),s.end()
void solve()
{
	int n , q; cin >> n >> q;
	vi ar(n + 1), sm(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	sort(all(ar));
	sm = ar;
	for (int i = 1; i <= n; i++)
	{
		sm[i] = sm[i - 1] + ar[i];
	}
	while (q--)
	{
		int x , y, sum = 0; cin >> x >> y;
		// for (int i = n - x, j = 0; j < y; i++, j++)
		// 	sum += ar[i]; causing the time limit exceeded
		cout << sm[n - x + y] - sm[n - x ] << endl;
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	while (t--)
	{
		solve();
	}
}