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
#define double         	long double
#define que_max        	priority_queue <int>
#define que_min        	priority_queue <int, vi, greater<int>>
#define read(x) 	   	int	 x ; cin >> x;
#define fo(i,n)         for(int i=0;i<n;i++)
#define Fo(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

const int N = 200005;

void cp() {
	read(n)	;
	string s; cin >> s;
	int k = n/2, a = k ,c=1;
	while(++a < n and s[a] == s[k]){
		c++;
	}
	a = k;
	while(--a >=0 and s[a] == s[k]){
		c++;
	}
	cout << c << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int t = 1;
	cin >> t;
	while (t--) cp();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " || ";
	return 0;
}