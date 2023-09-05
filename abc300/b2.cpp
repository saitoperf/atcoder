#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool cmp(const vector<vector<ll>> &a, const vector<vector<ll>> &b, ll h, ll w){
    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(a[i][j] != b[i][j]){
                return false;
            }
        }
    }
    return true;
}

void row_shift(vector<vector<ll>> &a, vector<vector<ll>> &b){
    vector<ll> a0j(a[0].size());
    for(ll j = 0; j < (ll)a[0].size(); j++){
        a0j[j] = a[0][j];
    }
    for(ll j = 0; (ll)a[0].size(); j++){
        a[a.size()-1][j] = a0j[j];
    }
}
void col_shift(vector<vector<ll>> &a, vector<vector<ll>> &b){
    vector<ll> ai0(a.size());
    for(ll i = 0; i < (ll)a.size(); i++){
        ai0[i] = a[i][0];
    }
    for(ll i = 0; i < (ll)a.size(); i++){
        a[i][a[0].size()-1] = ai0[i];
    }
}

int main(){
    ll h, w; cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w, 0)), b(h, vector<ll>(w, 0));
    for(ll i = 0; i < h; i++)for(ll j = 0; j < w; j++) cin >> a[i][j];
    for(ll i = 0; i < h; i++)for(ll j = 0; j < w; j++) cin >> b[i][j];

    if(cmp(a, b, h, w) == true){
        cout << "Yes" << endl;
        return 0;
    }

    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(cmp(a, b, h, w) == true){
                cout << "Yes" << endl;
                return 0;
            }
            col_shift(a, b);
        }
        col_shift(a, b);
        row_shift(a, b);
    }

    cout << "No" << endl;
    return 0;
}