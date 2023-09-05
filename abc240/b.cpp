#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); for(int i = 0 ; i< n; i++) cin >> a[i];
    set<ll> s;

    for(int i = 0 ; i<n; i++){
        s.insert(a[i]);
    }

    cout << s.size() << endl;

    return 0;
}