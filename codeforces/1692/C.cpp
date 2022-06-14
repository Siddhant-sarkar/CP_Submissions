#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	string s[8];
	for (int i = 0; i < 8; i++) cin >> s[i];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (s[i][j] == '#' and i != 0 and i != 7 and j != 0  and j != 7 )
			{
				if (s[i + 1][j + 1] == '#' and s[i + 1][j - 1] == '#' and s[i - 1][j + 1] == '#' and s[i - 1][j - 1] == '#')
				{
					cout << i + 1 << " " << j + 1 << " \n";
					return;
				}
			}
		}
	}
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