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
    read(n); read(m);
    if (n == 0 and m == 0 ) {
        cout << 0 << endl;
        return;
    }
    double k = sqrt(n * n + m * m);
    if (k == floor(k))
        cout << 1 << endl;
    else
        cout << 2 << endl;
}
int32_t main() {
    Mercer_Letifer;
    int t = 1;
    cin >> t;
    while (t--)
        cp();
}