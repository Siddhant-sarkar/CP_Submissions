#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	int n ; cin >> n;
	int ar[n][5];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> ar[i][j];
		}
	}

	bool ans = 0;
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			if (a == b) continue;
			int cnt1 = 0, cnt2 = 0, nt = 0;
			for (int i = 0; i < n; i++)
			{
				nt += (!ar[i][a] and !ar[i][b]);
				cnt1 += (ar[i][a] > 0); cnt2 += (ar[i][b] > 0);
			}
			if (cnt1 >= n / 2 and cnt2 >= n / 2 and !nt)
			{
				ans = 1;
			}
		}
	}
	cout << (ans ? "YES" : "NO") << "\n" ;
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