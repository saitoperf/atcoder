#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

int main(){
    ll n; cin >> n;
    string s; cin >> s; // 長さNの文字列, R, L, U, D

    set<pair<ll, ll>> ans;
    ans.insert(pair<ll, ll>(0, 0));
    pair<ll, ll> now(0, 0); // x, y
    for(ll i = 0; i < n; i++){
        if(s[i] == 'R'){
            now.first += 1;
        }else if(s[i] == 'L'){
            now.first -= 1;
        }else if(s[i] == 'U'){
            now.second += 1;
        }else if(s[i] == 'D'){
            now.second -= 1;
        }
        if(ans.find(now) != ans.end()){
            cout << "Yes" << endl;
            return 0;
        }
        ans.insert(now);
    }
    cout << "No" << endl;
    return 0;
}