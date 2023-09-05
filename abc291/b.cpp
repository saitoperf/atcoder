#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> x(5*n); for(ll i = 0; i < 5*n; i++)cin >> x[i];

    sort(x.begin(), x.end());
    double sum = 0;
    for(ll i = n; i < 4*n; i++){
        sum += x[i];
    }
    cout << sum/(3*n) << endl;
    return 0;
}