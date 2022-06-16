#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	int a , b ; cin >> a >> b;
	for (int i = 0; i < min(a, b); i++) cout << "10";
	if (a > b) cout << string(abs(b - a), '0');
	if (b > a) cout << string(abs(b - a), '1');
	cout << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}