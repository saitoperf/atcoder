#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());

    ll kpn = k/n;
    for(int i = 0; i < n; i++){
        if(a[i]-x*kpn >= 0){
            a[i] = a[i]-x*kpn; k -= kpn;
        }else{
            a[i] = 0; k -= kpn;
        }
    }
    return 0;
}