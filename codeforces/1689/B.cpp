#include"bits/stdc++.h"
using namespace std;
int p[1005], took[1005], n;
void solve() {
	int n; cin >> n;
	memset(took, 0, sizeof(took));
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	if (n == 1)
	{
		cout << -1 << endl;
		return;
	}
	for (int i = 1; i <= n - 2; i++) {
		int k = 1;
		while (took[k] || p[i] == k)k++;
		cout << k << " " ; took[k] = 1;
	}
	int a = -1, b = -1;
	for (int i = 1; i <= n; i++) {
		if (!took[i])
		{
			if (a == -1) a = i;
			else b = i;
		}
	}
	if (p[n - 1] != a and p[n ] != b)
		cout << a << " " << b << endl;
	else
		cout << b << " " << a << endl;

}
int main() {
	int t ;
	cin >> t;
	while (t--) {
		solve();
	}
}