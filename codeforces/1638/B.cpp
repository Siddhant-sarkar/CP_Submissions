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
	read(n);
	vector<int> odd, even;
	for (int i = 0; i < n; i++) {
		read(k);
		(k & 1) ? odd.pb(k) : even.pb(k);
	}

	if (is_sorted(all(odd)) and is_sorted(all(even)))
		cout << "YES" <<  endl;
	else
		cout << "NO" << endl;
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}