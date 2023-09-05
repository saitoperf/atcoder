#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool cmp(vector<vector<ll>> &a, vector<vector<ll>> &b, ll h, ll w){
    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(a[i][j] != b[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ll h, w; cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w, 0)), b(h, vector<ll>(w, 0));
    for(ll i = 0; i < h; i++)for(ll j = 0; j < w; j++) cin >> a[i][j];
    for(ll i = 0; i < h; i++)for(ll j = 0; j < w; j++) cin >> b[i][j];

    // 縦シフト
    vector<ll> a0(w);
    for(ll s = 0; s < h-1; s++){
        for(ll j = 0; j < w; j++){
            a0[j] = a[0][j];
        }
        for(ll j = 0; j < w; j++){
            a[s][j] = a[s+1][j];
        }
        if(cmp(a, b, h, w) == true){
            cout << "Yes" << endl;
            return 0;
        }
    }
    for(ll j = 0; j < w; j++){
        a[h-1][j] = a0[j];
    }
    if(cmp(a, b, h, w) == true){
        cout << "Yes" << endl;
        return 0;
    }
    
    for(ll t = 0; t < w; t++){
        // 横シフト

        if(cmp(a, b, h, w) == true){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}