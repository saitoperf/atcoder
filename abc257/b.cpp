#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll N, k, q; cin >> N >> k >> q;
    vector<bool> n(N, false);
    vector<ll> a(k); 
    for(ll i = 0; i < k; i++){
        ll tmp; cin >> tmp;
        a[i] = tmp-1;
    }
    vector<ll> l(q); 
    for(ll i = 0; i < q; i++){
        ll tmp; cin >> tmp;
        l[i] = tmp-1;
    }
    for(ll i = 0; i < k; i++){
        n[a[i]] = true;
    }

    // // Li
    for(ll i = 0; i < q; i++){
        if(a[l[i]] == N-1){
            continue;
        }
        if(n[a[l[i]]+1] == false){
            n[a[l[i]]] = false;
            n[a[l[i]]+1] = true;
            a[l[i]]++;
        }
    }

    for(ll i = 0; i < N; i++){
        if(n[i]){
            cout << i+1 << " ";
        }
    }
    cout << endl;

    return 0;
}