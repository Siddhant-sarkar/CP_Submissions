#include"bits/stdc++.h"
using namespace std;

//==========================//
//==========================//


void cp(){
    string s; cin >> s;
    int n = s.size();
    pair<int,int> pos={n-1,0};
    for(int i=0;i<n;i++)
        if(s[i] =='0'){
            pos.first = i;
            break;
        }
    for(int i = n-1 ; i>=0;i--)
        if(s[i] == '1'){
            pos.second =i;
            break;
        }
    cout << abs(pos.first - pos.second) +1<< endl;
    return;
}
int main(){
    int t ; cin >> t;
    while(t--){
        cp();
    }
}
