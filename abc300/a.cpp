#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, a, b; cin >> n >> a >> b;

    for(ll i = 0; i < n; i++){
        ll c; cin >> c;
        if(c == a+b){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}