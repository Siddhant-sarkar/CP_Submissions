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
	vector<vector<int>> arr(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j] - '0';
			if (arr[i][j] == 1 ) {
			}
		}
	}
	int k = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1] == 3)		{
				k = 0;
				break;
			}

		}
	}
	cout << (k ? "YES" : "NO") << endl;
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}



