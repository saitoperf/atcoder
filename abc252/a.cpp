#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, x; cin >> n >> x;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s2 = "";
    for(ll i = 0; i < s.size(); i++){
        for(ll j = 0; j < n; j++){
            s2 += s[i];
        }
    }
    cout << s2 << endl;
    return 0;
}