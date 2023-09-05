#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

int main(){
    ll n, Q; cin >> n >> Q;

    vector<priority_queue<ll, vector<ll>, greater<ll>>> qp(n);   // qp[箱番]
    vector<priority_queue<ll, vector<ll>, greater<ll>>> qp(n);   // qp[箱番]
    for(ll q = 0; q < Q; q++){
        ll f, i, j;
        cin >> f;
        if(f == 1){
            cin >> i >> j; j--;
            qp[j].push(i);
        }
        if(f == 2){
            cin >> i; i--;
            for(ll k = 0; k < (ll)qp[i].size(); k++){
                cout << qp[i].top() << " ";
            }
            // for(auto itr = qp[i]; k++){
            //     cout << qp[i]. << " ";
            // }
            cout << endl;
        }
        if(f == 3){
            cin >> i;

        }

    }

    return 0;
}