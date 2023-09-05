#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<ll> a;
    int c = 0;
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < (2*n-1)-i; j++){
            ll aa; cin >> aa;
            a.push_back(aa);
            c++;
        }
    }
    ll ans = 0;

    for(int i = 0; i < c-1; i++){
        for(int j = i+1; j < c; j++){
            cout << "(" << i << ", " << j << ") = ";
            ll tmp = a[i] ^ a[j];
            cout << tmp << " ";
            if(tmp > ans){
                ans = tmp;
            }
        }
        cout << endl;
    }

    cout << ans << endl;
    return 0;
}