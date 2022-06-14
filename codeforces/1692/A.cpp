#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	vi ar(4);
	int cnt = 0, n = 4;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	for (int i = 1; i < n; i++)
		if (ar[i] > ar[0]) cnt ++;
	cout << cnt << endl;
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
}