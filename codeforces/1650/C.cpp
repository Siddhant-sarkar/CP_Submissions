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
	read(n); read(m);
	vector<pair<int, int>> arr(m);
	map<int, int> mp;
	for (int i = 0; i < m; i++) {
		cin >> arr[i].F >> arr[i].S;
		mp[arr[i].F] = i + 1;
	}
	sort(all(arr), [](pair<int, int>a, pair<int, int>b) {return a.S < b.S;});
	for (int i = 0; i < m - 2 * n; i++) {
		arr.pop_back();
	}
	sort(all(arr), [](pair<int, int>a, pair<int, int>b) {return a.F < b.F;});
	int sum = 0;

	for (int i = 0; i < sz(arr) / 2; i++) {
		sum += arr[sz(arr) - i - 1].S + arr[i].S;
	}
	cout << sum << endl;
	for (int i = 0; i < sz(arr) / 2; i++) {
		cout << mp[arr[i].F] << " " << mp[arr[sz(arr) - 1 - i].F] << endl;
	}
	cout << endl;
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}