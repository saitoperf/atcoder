#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<pair<ll, pair<ll, ll>>> vp(n); // <コスト, <左, 右>>
    vector<ll> a(n); for(ll i = 0; i < n; i++){
        cin >> a[i];
        vp[i] = pair<ll, pair<ll, ll>>(a[i], pair<ll, ll>(i, i+1));
    }
    vp[n-1] = pair<ll, pair<ll, ll>>(a[n-1], pair<ll, ll>(n-1, 0));

    sort(vp.begin(), vp.end());
    
    set<ll> ok;
    ll ans = 0;
    for(auto v : vp){
        // cout << ok.size() << endl;
        if(ok.size() == n){
            break;
        }
        // cout << v.first << ", " << v.second.first << ", " << v.second.second << ", " << endl;
        ok.insert(v.second.first);
        ok.insert(v.second.second);
        ans += v.first;
    }
    cout << ans << endl;

    return 0;
}