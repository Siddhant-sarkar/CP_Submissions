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

const int M = 1000;
void cp() {
	read(n); read(m);
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n <= M) {
		int ans = 1;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				ans *= abs(arr[i] - arr[j]) % m;
				ans = (ans + m) % m;
			}
		}
		cout << (ans + m) % m << endl;
	} else {
		cout << 0 << endl;
	}
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	// cin >> t;
	while (t--)
		cp();
}