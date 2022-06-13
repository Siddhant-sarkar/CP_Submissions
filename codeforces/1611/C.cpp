#include"bits/stdc++.h"
using namespace std;
#define int long long int
typedef vector<int> vi;
typedef pair<int,int> pii;
#define all(s) s.begin(),s.end()
void solve()
{
	int n ; cin >> n;
	vi ar(n);
	for(auto &it : ar) cin >> it;
	int mx = *max_element(all(ar));
	if(ar.front()!= mx && ar.back()!=mx){cout << -1 << endl;}
	else
	{
		int i= 0,j= n-1;
		if(ar[0] == mx){i++;}
		if(ar[n-1] == mx){j--;}
		deque<int> dq;
		dq.push_back(mx);
		while(i<=j)
		{
			if(ar[i]<ar[j])
			{
				dq.push_front(ar[i]);
				i++;
			}else
			{
				dq.push_back(ar[j]);
				j--;
			}
		}
	for(auto it : dq)
		cout << it << " ";
	cout << "\n";
	}

}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;cin  >>t;
	while (t--)
	{
		solve();
	}
}