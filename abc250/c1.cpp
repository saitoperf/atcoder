#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, q; cin >> n >> q;

    vector<ll> ans(n); for(ll i=0; i < n; i++) ans[i] = i+1;
    
    vector<ll> b(n), f(n);
    for(ll i=0; i < n; i++){
        f[i] = i-1;
        b[i] = i+1;
    }
    f[0] = -1; b[n-1] = -1;

    ll root = 0;
    for(ll i = 0; i < q; i++){
    ll x; cin >> x; x--;
        // 右なら
        if(x == n-1){
            ll f1=f[x-1], b1=b[x-1], f2=f[x], b2=b[x];
            f[x-2]=b1;
            f[x-1]=b1;
            b[x-1]=b2;
            f[x]=f1;
            b[x]=f2;
            f[x+1]=f2;
        }
        // それ以外
        else{
            // 左なら
            if(x == 0){
                root = b[0];
                cout << "aaa" << endl;
            }
            ll f1=f[x], b1=b[x], f2=f[x+1], b2=b[x+1];
            b[x-1]=b1;
            f[x]=b1;
            b[x]=b2;
            f[x+1]=f1;
            b[x+1]=f2;
            f[x+2]=f2;
        }
        cout << "root : " << root << endl;
        cout << "f : ";
        for(auto ff : f) cout << ff << " "; 
        cout << "\nb : ";
        for(auto bb : b) cout << bb << " "; 
        cout << endl;
    }

    // ll next = root;
    // cout << next << endl;
    // while(next != -1){
    //     if(b[next] == -1){
    //         break;
    //     }else{
    //         cout << b[next]+1 << endl;
    //         n = b[next];
    //     }
    // }
    return 0;
}