#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

const ll mod = 998244353;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n); for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];

    // 最後のカード以外の情報
    vector<pair<ll, vector<ll>>> av(n-1);   // (個数n, {値1, 値2...値n})
    vector<pair<ll, vector<ll>>> bv(n-1);
    for(ll i = 0; i < n-1; i++){
        av[i].first = 2;
        bv[i].first = 2;
        if(a[i] == a[i+1]){
            av[i].first -= 1;
            av[i].second.push_back(a[i+1]);
        }
        if(a[i] == b[i+1]){
            av[i].first -= 1;
            av[i].second.push_back(b[i+1]);
        }
        if(b[i] == a[i+1]){
            bv[i].first -= 1;
            bv[i].second.push_back(a[i+1]);
        }
        if(b[i] == b[i+1]){
            bv[i].first -= 1;
            bv[i].second.push_back(b[i+1]);
        }
    }

    for(ll i = 0; i < n-1; i++){
        cout << av[i].first << " " << bv[i].first << endl;
    }
    return 0;
}


