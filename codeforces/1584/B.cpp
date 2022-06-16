#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	int n , m;  cin >> n >> m;
	int a = m * n;
	cout << (a + 3 - 1) / 3 << "\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--)
	{
		cerr << "testcase\n"  ;
		solve();
	}
	return 0;
}