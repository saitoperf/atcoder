#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll x; cin >> x;
    if(x > 0){
        ll ans = x/10;
        // if(x%10 > 0){
        //     ans++;
        // }
        cout << ans << endl;
    }else if(x < 0){
        ll ans = x/10-1;
        if(x%10 == 0){
            ans += 1;
        }
        cout << ans << endl;
    }else{
        cout << "0" << endl;
    }
    return 0;
}