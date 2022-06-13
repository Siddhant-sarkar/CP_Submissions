#include "bits/stdc++.h"
using namespace std;
#define int long long int
typedef vector<int> vi ;
typedef pair<int,int> pii;
#define bg(x) cerr <<#x << " --> "<< x << endl;


void solve()
{
	int n ; cin >> n;
	string s; cin >> s;
	if(is_sorted(s.begin(),s.end()))
		cout << 0 << "\n";
	else
	{
		cout << 1 << "\n";
		int zr = count(s.begin(),s.end(),'0'), on = count(s.begin(),s.end(),'1');
		cout << 2*count(s.begin(),s.begin()+zr,'1') <<" ";
		for(int i=0;i<n;i++)
			if((i<zr and s[i]=='1') or( i >= zr and s[i] =='0'))  cout << i+1 << " ";

	}


}
int32_t main()
{
	int t; cin >>t;
	while(t--) 
		solve();
}

