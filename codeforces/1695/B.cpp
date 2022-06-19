#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define F first
#define S second
#define INF 1e18+7
#define int long long int
#define sz(s) (int) s.size()
#define all(s) s.begin(),s.end()
#define deb(s) cerr << #s <<" "<< s <<"\n" ;
#define god ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
	int N, M;
	cin >> N;
	vi ar(N);
	for (auto &it : ar) cin >> it ;
	if (N & 1) M = 1;
	else
	{
		int pos = min_element(all(ar)) - ar.begin();
		// deb(pos);
		M = (pos & 1 ? 1 : 0);
	}
	cout << (M ? "Mike\n" : "Joe\n");

}
int32_t main() {
	god
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}