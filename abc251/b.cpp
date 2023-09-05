#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, w; cin >> n >> w;
    vector<ll> A(n); for(ll i = 0; i < n; i++) cin >> A[i];

    set<ll> ans;
    
    for(ll i = 0; i < n; i++){
        if(A[i] <= w){
            ans.insert(A[i]);
        }
    }

    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            if(i != j){
                if(A[i]+A[j] <= w){
                    ans.insert(A[i]+A[j]);
                }
            }
        }
    }

    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            if(i != j){
                for(ll k = j; k < n; k++){
                    if(j != k){
                        if(A[i]+A[j]+A[k] <= w){
                            ans.insert(A[i]+A[j]+A[k]);
                        }
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;
    // for (auto s : ans){
    //     cout << s << endl;
    // }
    return 0;
}