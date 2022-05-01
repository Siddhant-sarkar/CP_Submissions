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
	string s; cin >> s;
	set<char> st (all(s));
	int w = sz(st);
	// bug(w);
	for (int i = 0; i <= sz(s) - w; i++) {
		string sb = s.substr(i, w);
		set<char> t (all(sb));
		if (sz(t) != w ) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}