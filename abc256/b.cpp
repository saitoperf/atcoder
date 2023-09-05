#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> m(4);
    // n回ループ
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        m[0]++;
        // 盤面の移動
        for(ll j = 3; j >= 0; j--){
            // ll tmp = m[j];
            if( j+a[i] > 3 ){
                ans += m[j];
            }else{
                m[j+a[i]] = m[j];
            }
            m[j] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}