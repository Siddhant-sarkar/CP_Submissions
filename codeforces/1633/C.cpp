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
    pair<int, int> p, d;
    cin >> p.F >> p.S >> d.F >> d.S;
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    int dc = (p.F + d.S - 1) / d.S, hc = (d.F + p.S - 1) / p.S;
    // cout << dc << " " << hc << endl;
    if (dc >= hc) {
        cout << "YES" << endl;
        return;
    } else {
        int N = arr[0];
        for (int i = 0; i <= N; i++) {
            pair<int, int> np = {p.F + i * arr[2], p.S + (N - i)* arr[1]};
            int dc = (np.F + d.S - 1) / d.S, hc = (d.F + np.S - 1) / np.S;
            if (dc >= hc) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}
int32_t main() {
    Mercer_Letifer;
    int t = 1;
    cin >> t;
    while (t--)
        cp();
}


