#include "bits/stdc++.h"
using namespace std;
// MACROS
#define nl "\n"
#define F first
#define S second
#define INF 8e18
#define int long long int
#define sz(s) (int) s.size()
#define all(s) s.begin(),s.end()
//TYPEDEFS
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef set<int> ST;
typedef map<int,int> MP;


void cp()
{
	int N, X ; cin >> N;
	int arr[N+1] ;
	for(int i=1;i<=N;i++){
		cin >>  arr[i];
		X = (i==1?arr[i] : X ^ arr[i]);
	}
	for(int i=1;i<=N;i++){
		int a = X ^ arr[i];
		for(int j=1;j<=N;j++){
			if(arr[j]==a){
				cout << arr[j]  << nl;
				return;
			}
		}
	}

}


int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t = 1; 
    cin >>t;
    while (t--) cp();
	return 0;
}
