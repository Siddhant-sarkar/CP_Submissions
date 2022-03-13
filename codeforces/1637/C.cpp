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

bool chk(int arr[], int n ) {
	for (int i = 1; i < n - 1; i++)
		if (arr[i] != 1)
			return false;
	return true;
}
void cp() {
	read(n);
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	if ((n == 3 and arr[1] & 1) || (chk(arr, n))) {
		cout << -1 << endl;
		return ;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (i != 0 and i != n - 1)
			sum += (arr[i] + 1) / 2;
	cout << sum << endl;
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}