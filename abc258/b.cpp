#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n*3, 0));
    for(ll i = 0; i < n; i++){
        string tmp; cin >> tmp; tmp = tmp+tmp+tmp;
        for(ll j = 0; j < n*3; j++){
            char t = tmp[j]; a[i][j] = atoi(&t);
        }
    }

    vector<vector<ll>> A(n*3, vector<ll>(n*3, 0));
    for(ll k = 0; k < 3; k++){
        for(ll l = 0; l < 3; l++){
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < n; j++){
                    A[i+n*k][j+n*l] = a[i][j];
                    // cout << a[i][j] << " ";
                }
                // cout << endl;
            }
        }
    }

    // for(ll i = 0; i < n*3; i++){
    //     for(ll j = 0; j < n*3; j++){
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    pair<ll, ll> init = pair<ll, ll>(n, n);
    vector<ll> ans8(8, 0);
    ll ans = 0;
    for(ll i = init.first; i < init.first+n; i++){
        for(ll j = init.second; j < init.second+n; j++){
            vector<ll> ans8(8, 0);  // 8方向分の値
            // 方向 0
            for(ll k = 0; k < n; k++){
                ans8[0] += A[i-k][j-k]*pow(10, n-k-1);
            }
            // 方向 1
            for(ll k = 0; k < n; k++){
                ans8[1] += A[i-k][j]*pow(10, n-k-1);
            }
            // 方向 2
            for(ll k = 0; k < n; k++){
                ans8[2] += A[i-k][j+k]*pow(10, n-k-1);
            }
            // 方向 3
            for(ll k = 0; k < n; k++){
                ans8[3] += A[i][j-k]*pow(10, n-k-1);
            }
            // 方向 4
            for(ll k = 0; k < n; k++){
                ans8[4] += A[i][j+k]*pow(10, n-k-1);
            }
            // 方向 5
            for(ll k = 0; k < n; k++){
                ans8[5] += A[i+k][j-k]*pow(10, n-k-1);
            }
            // 方向 6
            for(ll k = 0; k < n; k++){
                ans8[6] += A[i+k][j]*pow(10, n-k-1);
            }
            // 方向 7
            for(ll k = 0; k < n; k++){
                ans8[7] += A[i+k][j+k]*pow(10, n-k-1);
            }
            
            // 最後の処理
            sort(ans8.rbegin(), ans8.rend());
            if(ans8[0] > ans){  // 8方向分の値と、今までで一番大きかった値の比較
                ans = ans8[0];
            }
        }
    }

    cout << ans << endl;
    return 0;
}