#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> a(n+1, 0), b(n+1, 0); for(ll i = 1; i <= n; i++) cin >> a[i] >> b[i];

    vector<vector<ll>> dp(n+1, vector<ll>(x+1, 0));

    dp[1][a[1]] = 1;
    dp[1][b[1]] = 1;

    for(ll i = 2; i <= n; i++){
        for(ll j = 1; j <= x; j++){

            if(dp[i-1][j] != 0){
                if(a[i]+j <= x){
                    dp[i][a[i]+j] = 1;
                }
                if(b[i]+j <= x){
                    dp[i][b[i]+j] = 1;
                }
            }

        }
    }

    // for(ll i = 1; i <= n; i++){
    //     for(ll j = 1; j <= x; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if(dp[n][x] == 1){ 
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}