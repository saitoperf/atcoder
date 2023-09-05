#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

int main(){
    ll n, Q; cin >> n >> Q;

    vector<map<ll, ll>> vm(n);   // qp[箱番]
    map<ll, set<ll>> m3;
    for(ll q = 0; q < Q; q++){
        ll f, i, j;
        cin >> f;
        if(f == 1){
            cin >> i >> j; j--;
            vm[j][i]++;
            m3[i].insert(j+1);
        }
        if(f == 2){
            cin >> i; i--;
            for(auto itr = vm[i].begin(); itr != vm[i].end(); itr++){
                for(ll k = 0; k < itr->second; k++){
                    cout << itr->first << " ";
                }
            }
            cout << endl;
        }
        if(f == 3){
            cin >> i;
            for(auto itr = m3[i].begin(); itr != m3[i].end(); itr++){
                cout << *itr << " ";
            }
            cout << endl;
        }
    }
    return 0;
}