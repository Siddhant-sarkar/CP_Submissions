#include"bits/stdc++.h"
using namespace std;

void solve()
{
	int n; cin >> n;
	string a, b; cin >> a >> b;
	// if (a == b) cout << "YES" << endl;  return;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			if (b[i] == 'b' or b[i] == 'c')
			{
				int idx = i;
				while (a[idx] == a[i] and idx < n) idx++;
				if ((a[i] == 'a' and a[idx] == 'b') || (a[i] == 'b' and a[idx] == 'c'))
					swap(a[idx], a[i]);
			}
			if (a[i] != b[i]) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	// cout << a << " " << b << endl;
	cout << (a[n - 1] == b[n - 1] ? "YES" : "NO") << endl;
}
int main() {
	int t ; cin >> t;
	while (t--) {
		solve();
	}
}