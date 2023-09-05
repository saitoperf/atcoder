#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> a(n); for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());

    vector<ll> kv(n, 0);
    // 何枚のクーポンを必要とするか？
    for(ll i = 0; i < n; i++){
        kv[i] = a[i]/x;
    }

    for(ll i = 0; i < n; i++){
        if(k >= kv[i]){
            a[i] = a[i]-x*kv[i];
            k -= kv[i];
        }else{
            a[i] = a[i]-x*k;
            k = 0;
        }
    }

    // クーポンが余っていたら
    if(k > 0){
        // 商品をソートして先頭から1枚ずつ使う
        sort(a.rbegin(), a.rend());
        for(ll i = 0; i < n; i++){
            a[i] = 0;
            k--;
            if(k == 0){
                break;
            }
        }
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}