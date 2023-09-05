#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, A, B; cin >> n >> A >> B;

    vector<vector<bool>> ans(A*n, vector<bool>(B*n));

    bool f = true;
    // 縦
    for(ll i = 0; i < n; i++){
        // 横
        for(ll j = 0; j < n; j++){
            // タイル
            if(f == true){
                for(ll a = 0; a < A; a++){
                    for(ll b = 0; b < B; b++){
                        ans[A*i+a][B*j+b] = true;
                    }
                }
                f = false;
            }else{
                for(ll a = 0; a < A; a++){
                    for(ll b = 0; b < B; b++){
                        ans[A*i+a][B*j+b] = false;
                    }
                }
                f = true;
            }
        }
        if(n%2 == 0){
            if(f == true){
                f = false;
            }else{
                f = true;
            }
        }
    }

    for(ll i = 0; i < A*n; i++){
        for(ll j = 0; j < B*n; j++){
            if(ans[i][j] == true){
                cout << ".";
            }else{
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}
