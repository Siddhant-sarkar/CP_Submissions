#include"bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define int long long int
#define sz(x) (int)x.size()
#define read(x) int x ; cin >> x
#define all(x) x.begin(), x.end()
#define tr(x,it) for(auto &it : x)
#define bug(x) cerr <<#x <<" --> " << x << endl;
#define Mercer_Letifer ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void cp() {
	// io
	read(n);
	vector<int> arr(n);
	map<int, vector<int>> cnt;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt[arr[i]].pb(i);
	}

	if (sz(cnt) == sz(arr))
		cout << -1 << endl;
	else {
		int ans = INT_MIN;
		for (auto [a, b] : cnt) {
			if (sz(b) >= 2) {
				// bug(a);
				pair<int, int> l, r;
				for (int i = 0; i < sz(b) - 1; i++) {
					l = {b[i], b[i]}, r = {b[i + 1], b[i + 1]};
					// cout << l.F << " " << l.S << endl;
					// cout << r.F << " " << r.S << endl;
					while (l.F >= 0) {
						l.F--;
						r.F--;
					}
					l.F++; r.F++;
					while (r.S < n) {
						l.S++;
						r.S++;
					}
					l.S--; r.S--;
					// cout << l.F << " " << l.S << endl;
					// cout << r.F << " " << r.S << endl;
					ans = max (ans, l.S - l.F + 1);
				}
			}
		}
		cout << ans << endl;
	}
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}



