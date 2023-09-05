#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll Q; cin >> Q;

    ll n, x, c;
    // queue<ll> que;
    queue<pair<ll, ll>> vp; // (何個, ボールに書いてある数)
    for(ll q = 0; q < Q; q++){
        cin >> n;
        if(n == 1){ // in
            cin >> x >> c;  // xのボールをc個，queへinput
            vp.push(pair<ll, ll>(c, x));
        }else if(n == 2){  // out
            cin >> c;   // c個取り出して，合計値を出力
            ll sum=0;
            while(true){
                if(vp.size() != 0){
                    if(vp.front().first > c){
                        sum += c * vp.front().second;   // c * ボールに書いてある数
                        vp.front().first = vp.front().first - c;    // 先頭からc個引く
                        break;
                    }else{
                        sum += vp.front().first * vp.front().second;    // 全部pop
                        c = c - vp.front().first;
                        vp.pop();
                    }
                }else{
                    break;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}