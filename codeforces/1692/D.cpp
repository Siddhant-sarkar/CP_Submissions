#include"bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define int long long int
#define all(s) s.begin(),s.end()

void solve()
{
	string s; cin >> s;
	int hr = stoi(s.substr(0, 2)) , mn = stoi(s.substr(3, 2)), n , cnt = 0;
	int a = hr, b = mn;
	cin >> n;
	do
	{
		string x = to_string(hr) , y = to_string(mn);
		if (x.size() == 1) x = "0" + x; if (y.size() == 1) y = "0" + y;
		if (x[0] == y[1] and y[0] == x[1]) cnt ++;
		mn += n % 60;
		hr += n / 60;
		if (mn >= 60)
		{hr++; mn = mn - 60;}
		if (hr >= 24) hr = hr - 24;
		// cout << hr << " " << mn << endl;
	} while (hr != a ||  mn != b);
	// cout << hr << " " << mn << endl;
	cout << cnt << "\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--)
	{
		// cerr << "testcase\n"  ;
		solve();
	}
	return 0;
}