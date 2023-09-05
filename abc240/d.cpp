#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); for(ll i = 0; i < n; i++) cin >> a[i];

    stack<pair<ll, ll>> s;
    for(ll i = 0; i < n; i++){

        if(s.size() == 0){
            s.push(pair<ll, ll>(a[i], 1));
            cout << s.size() << endl;
            continue;
        }

        if(s.top().first == a[i] && s.top().second == a[i]-1){  // パターン3
            for(ll j = 0; j < a[i]-1; j++){
                s.pop();
            }

        }else if(s.top().first != a[i]){  // パターン1
            s.push(pair<ll, ll>(a[i], 1));

        }else if(s.top().first == a[i]){  // パターン2
            s.push(pair<ll, ll>(a[i], s.top().second+1));
        }
        cout << s.size() << endl;
    }
    return 0;
}