#include "bits/stdc++.h"

using namespace std;

#define int            	long long int
#define F              	first
#define S              	second
#define pb             	push_back

#define si             	set <int>
#define vi             	vector <int>
#define pii            	pair <int, int>
#define vpi            	vector <pii>
#define vpp            	vector <pair<int, pii>>
#define mii            	map <int, int>
#define mpi            	map <pii, int>
#define spi            	set <pii>

#define endl           	"\n"
#define sz(x)          	((int) x.size())
#define all(p)         	p.begin(), p.end()
#define fo(i,n)         for(int i=0;i<n;i++)
#define double         	long double
#define que_max        	priority_queue <int>
#define que_min        	priority_queue <int, vi, greater<int>>
#define read(x) 	   	int	 x ; cin >> x;
#define bug(...)       	__f (#__VA_ARGS__, __VA_ARGS__)
#define Fo(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define print(a)       	for(auto x : a) cout << x << " "; cout << endl
#define printP(a)      	for(auto x : a) cout << x.F << " " << x.S << endl
#define printPreci(a,x)	cout << fixed << setprecision(x) << a <<endl

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
	string s; cin >> s;
	int n = sz(s);
	vi on(n + 1, 0);
	fo(i, n) {
		on[i + 1] = on [i] + (s[i] - '0');
	}

	int ans = INT_MAX;
	Fo(i, 1, n + 1) {
		int l = i , r = n + 1;
		// cout << "000" << endl;
		while (l < r) {
			int m = (l + r) >> 1;
			int z = m - i + 1 - (on[m] - on[i - 1])  , o = on[n] - (on[m] - on[i - 1]);
			// bug(z, o);
			if (z > o ) r = m ;
			else l = m + 1;
			ans = min(ans, max(o, z)) ;
		}
	}
	if (on[n] == n || on[n] == 0) ans = 0;
	cout << ans << endl;
}
inline int power(int a, int b) {
	int x = 1;
	while (b) {
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}