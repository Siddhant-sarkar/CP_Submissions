#include"bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long int
#define bug(x) cerr <<#x <<" --> " << x << endl;
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define read(x) int x ; cin >> x
#define tr(x,it) for(auto &it : x)
#define Mercer_Letifer ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void cp() {
	string s ; cin >> s;
	int n = sz(s);
	if (n == 1) {
		cout << "Bob " << (s[0] - 'a' + 1) << endl;
		return ;
	} else {
		int ans = 0, b = 0;
		for (int i = 0; i < n; i++) {
			ans += s[i] - 'a' + 1;
		}
		if (n % 2 == 0) {
			cout << "Alice " << ans << endl;
		} else {
			if (s[0] < s[n - 1]) {
				ans -= s[0] - 'a' + 1;
				b = s[0] - 'a' + 1;
			} else {
				ans -= s[n - 1] - 'a' + 1;
				b = s[n - 1] - 'a' + 1;
			}
			cout << ((ans > b) ? "Alice " : "Bob ") << abs(ans - b) << endl;
		}
	}
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}