#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 0)), b(n, vector<ll>(n, 0));
    for(ll i = 0; i < n; i++)for(ll j = 0; j < n; j++)cin >> a[i][j];
    for(ll i = 0; i < n; i++)for(ll j = 0; j < n; j++)cin >> b[i][j];

    for(ll r = 0; r < 4; r++){
        vector<vector<ll>> na(n, vector<ll>(n, 0));
        // 回転
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                na[i][j] = a[n-1-j][i];
            }
        }
        // 比較
        bool flag = 1;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(a[i][j] == 1){
                    if(b[i][j] == 0){
                        flag = 0;
                    }
                }
            }
        }
        if(flag == 1){
            cout << "Yes" << endl;
            return 0;
        }
        // コピー
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                a[i][j] = na[i][j];
                // cout << a[i][j] << " ";
            }
            // cout << endl;
        }
        // cout << endl;
    }
    cout << "No" << endl;
    return 0;
}