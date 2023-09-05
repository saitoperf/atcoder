// TLE
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

const ll mod = 998244353;
vector<ll> n(11, 0);

ll func(int i, int j){
    // 終了処理
    if(i == 2){
        return n[j];
    }

    if(j == 1){
        return (func(i-1, 1)+func(i-1, 2)) % mod;
    }else if(j == 9){
        return (func(i-1, 8)+func(i-1, 9)) % mod;
    }

    return (func(i-1, j-1)+func(i-1, j)+func(i-1, j+1)) % mod;
}

int main(){
    ll N; cin >> N;
    n[1] = 2;
    n[9] = 2;
    for(int i = 2; i <=8; i++) n[i] = 3;

    ll ans = 0;
    for(int j = 1; j <= 9; j++){
        ans += func(N, j);
    }
    cout << ans << endl;

    return 0;
}