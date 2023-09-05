#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<string> s(n); vector<ll> t(n);
    for(ll i = 0; i < n; i++) cin >> s[i] >> t[i];

    // オリジナルのテーブル
    map<string, pair<ll, ll>> mp;   // < key=文字列, <何番目に現れたか, 点数> >
    for(ll i = 0; i < n; i++){
        // オリジナル
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = pair<ll, ll>(i, t[i]);
        }
    }

    vector<pair<ll, ll>> vec;
    for(auto m : mp){
        vec.push_back(m.second);
    }

    sort(vec.begin(), vec.end());
    // for(auto v : vec){
    //     cout << v.first << ", " << v.second << endl;
    // }

    ll ans = -1;
    ll max = -1;
    for(auto v : vec){
        // cout << ans << ", " << v.second << endl;
        if(max < v.second){
            max = v.second;
            ans = v.first+1;
        }
    }

    cout << ans << endl;
    return 0;
}