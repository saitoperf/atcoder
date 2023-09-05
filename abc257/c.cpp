#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> w(n); for(ll i = 0; i < n; i++) cin >> w[i];

    vector<pair<double, bool>> ws(n);
    ll c = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0'){    // 子供
            ws[i] = pair<double, bool>(w[i], false);
        }else{  // 大人
            ws[i] = pair<double, bool>(w[i], true);
            c++;
        }
    }
    sort(ws.begin(), ws.end());

    vector<pair<ll, ll>> v(n+1);
    v[0] = pair<ll, ll>(c, 0);  // 大人, 子供
    ll bf = c; ll bs = 0;
    for(ll i = 0; i < n; i++){
        if(ws[i].second == false){  // 子供
            v[i+1] = pair<ll, ll>(bf, bs+1);
        }else{  // 大人
            v[i+1] = pair<ll, ll>(bf-1, bs);
        }
        bf = v[i+1].first, bs = v[i+1].second;
    }

    // for(ll i = 0; i < n; i++){
    //     cout << ws[i].first << " " << ws[i].second << endl;
    // }

    ll ans = v[0].first + v[0].second;
    for(ll i = 1; i < n+1; i++){
        if(v[i].first+v[i].second > ans){
            ans = v[i].first+v[i].second;
        }
    }
    for(ll i = 0; i < n+1; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << ans << endl;

    return 0;
}

/*
5
10101
60 50 50 50 60

*/