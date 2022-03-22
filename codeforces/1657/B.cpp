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
    read(b);
    read(x);
    read(y);
    vector<int> arr(n + 1, 0);
    arr[0] = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        arr[i] = arr[i - 1] + x;
        if (arr[i] > b) {
            arr[i] -= x;
            arr[i] -= y;
        }
        sum += arr[i];
    }
    cout << sum << endl;
}
int32_t main() {
    Mercer_Letifer;
    int t = 1;
    cin >> t;
    while (t--)
        cp();
}