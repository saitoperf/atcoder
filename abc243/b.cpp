#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> b(n); for(int i = 0; i < n; i++) cin >> b[i];

    ll ans1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]){
            ans1++;
        }
    }

    ll ans2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(a[i] == b[j]){
                ans2++;
            }
        }
    }
    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}