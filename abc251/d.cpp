#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll w; cin >> w;

    for(ll i = 1; i <= w; i++){
        for(ll j = i+1; j <= w; j++){
            if(i != j){
                for(ll k = j+1; k <= w; k++){
                    if(j != k){
                        if(A[i]+A[j]+A[k] <= w){
                            ans.insert(A[i]+A[j]+A[k]);
                        }
                    }
                }
            }
        }
    }

    return 0;
}