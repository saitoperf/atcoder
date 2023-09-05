#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, Q; cin >> n >> Q;
    string s; cin >> s;

    for(ll q = 0; q < Q; q++){
        pair<ll, ll> que; cin >> que.first >> que.second;
        if(que.first == 1){
            string subs = s.substr(s.size()-que.second, que.second);
            s = (subs+s).substr(0, n);

        }else{  // 2
            cout << s[que.second-1] << endl;
        }
    }
    return 0;
}