#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

// サイズを返す
void corner(vector<string> &c, ll i, ll j, vector<ll> &s){
    if(c[i-1][j-1] != '#'){
        return;
    }
    if(c[i-1][j+1] != '#'){
        return;
    }
    if(c[i+1][j-1] != '#'){
        return;
    }
    if(c[i+1][j+1] != '#'){
        return;
    }
    // 頂点確定なので、数える
    ll ans = 1;
    ll count = 2;
    while(true){
        if(i-count < 0 || j-count < 0){
            break;
        }
        if(c[i-count][j-count] != '#'){
            break;
        }
        ans++;
        count++;
    }
    s[ans-1] += 1;

    return;
}

int main(){
    ll h, w; cin >> h >> w;
    vector<string> c(h); for(ll i = 0; i < h; i++)cin >> c[i];
    vector<ll> s(min(h, w));

    for(ll i = 1; i < h-1; i++){
        for(ll j = 1; j < w-1; j++){
            if(c[i][j] == '#'){
                corner(c, i, j, s);
            }
        }
    }

    for(ll i = 0; i < min(h, w); i++){
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}