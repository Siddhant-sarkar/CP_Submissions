#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	int n , k; cin >> n >> k;
	vi ar(k);
	for (auto &it : ar) cin >> it ;
	sort(all(ar)); reverse(all(ar));

	int i = 0, t = n - 1;
	while (i < k and t >= n - ar[i])
	{
		t -= n - ar[i];
		i++;
	}

	cout << i << endl;

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