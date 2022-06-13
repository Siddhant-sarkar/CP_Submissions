#include"bits/stdc++.h"
using namespace std;
#define int long long int
typedef vector<int> vi ;
typedef pair<int,int> pii;


void cp()
{
	int n ; cin >>n;
	vi ar(n);
	for(auto &it : ar) cin >> it;
	sort(ar.begin(),ar.end());
	int mn = ar[0], mx = mn;
	for(int i=1;i<n;i++)
	{
		int k = ar[i] - mn;
		mx = max(mx,k);
		mn+= k;
	}
	cout << mx << endl;

}
int32_t main(){
	int t ; cin >> t;
	while(t--) 
		cp();
}