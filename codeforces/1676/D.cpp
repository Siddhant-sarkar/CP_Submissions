#include "bits/stdc++.h"
using namespace std ;
#define int             long long
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef vector<pii>     vpii;
typedef long double     ld;
#define F               first
#define S               second
#define pb              push_back
#define sz(a)           (int)a.size()
#define nline           "\n"
#define all(v)          v.begin(),v.end()
#define fr(a,b)         for(auto &a : b)
#define fo(i,k,n)       for(int i=k; k<n?i<n:i>n; k<n?i+=1:i-=1)
void _runtimeTerror_() {
	int n , m, ans = INT_MIN;
	cin >> n >> m ;
	int arr[n][m];
	fo(i, 0, n) {
		fo(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	fo(i, 0, n) {
		fo(j, 0, m) {
			int sum = arr[i][j];
			for (int a = i + 1, b = j + 1; a < n and b < m; a++, b++)
				sum += arr[a][b];
			for (int a = i + 1, b = j - 1; a < n and b >= 0 ; a++, b--)
				sum += arr[a][b];
			for (int a = i - 1, b = j + 1; a >= 0 and b < m; a--, b++)
				sum += arr[a][b];
			for (int a = i - 1, b = j - 1; a >= 0 and b >= 0; a--, b--)
				sum += arr[a][b];
			ans = max(sum , ans);
		}
	}
	cout << ans << endl;
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TESTS = 1;
	cin >> TESTS;
	while (TESTS--) {
		_runtimeTerror_();
	}
	return 0;
}