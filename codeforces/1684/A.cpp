#include"bits/stdc++.h"
using namespace std;

void solve(){
	string s ; cin >> s;
	if(s.size()==2){
		cout << s[1] << endl;
		return;
	}else{
		int m = INT_MAX;
		for(auto c : s){
			m = min(m,c-'0');
		}
		cout << m << endl;
		return;
	}
}

int main(){
	int t ; cin >> t;
	while(t--){
		solve();
	}
}