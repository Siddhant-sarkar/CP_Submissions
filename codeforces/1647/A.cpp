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
	if (n % 3 == 0) {
		int l = n / 3;
		for (int i = 0; i < l; i++)
			cout << "21" ;
		cout << endl;
	} else if ((n + 1) % 3 == 0) {
		int l = (n + 1) / 3;
		for (int i = 0; i < l - 1; i++)
			cout << "21" ;
		cout << 2 << endl;
	} else {
		int l = (n + 2) / 3;
		for (int i = 0; i < l - 1; i++)
			cout << "12" ;
		cout << 1 << endl;
	}
}
int32_t main() {
	Mercer_Letifer;
	int t = 1;
	cin >> t;
	while (t--)
		cp();
}



