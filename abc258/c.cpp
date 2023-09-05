#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, Q; cin >> n >> Q;
    string s; cin >> s;

    ll b = 0;
    for(ll q = 0; q < Q; q++){
        pair<ll, ll> que; cin >> que.first >> que.second;
        if(que.first == 1){
            if(b-que.second < 0){
                b = s.size() + (b-que.second);
            }else{
                b = b - que.second;
            }

        }else{  // 2
            if(b+que.second-1 >= (ll)s.size()){
                cout << s[(b+que.second-1)-s.size()] << endl;
                // cout << (b+que.second-1)-(ll)s.size() << ", " << s[(b+que.second-1)-(ll)s.size()] << endl;
            }else{
                cout << s[b+que.second-1] << endl;
                // cout << b+que.second-1 << ", " << s[b+que.second-1] << endl;
            }
        }
    }
    return 0;
}