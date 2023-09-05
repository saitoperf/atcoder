#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll s(ll a, ll d, ll k){
    return a+k*d;
}


int main(){
    ll x, a, d, n; cin >> x >> a >> d >> n;
    if(x < 0){
        x = x*(-1);
        a = a+(n-1)*d;
    }
    ll c = 0; // 操作の回数

    ll l = 0;
    ll r = n-1;
    ll m;
    while(l <= r){
        m = l + (r-l)/2;
        if(s(a, d, m-1) <= x && x <= s(a, d, m+1)){   // hit !
            if(s(a, d, m) <= x  &&  x <= s(a, d, m+1)){   // +hit
                if( abs(x-s(a, d, m)) < abs(x-s(a, d, m+1)) ){
                    c = abs(x-s(a, d, m));
                }else{
                    c = abs(x-s(a, d, m+1));
                }
            }else if(s(a, d, m-1) <= x  &&  x <= s(a, d, m)) {     // -hit
                if(abs(x-s(a, d, m-1)) < abs(x-s(a, d, m))){
                    c = abs(x-s(a, d, m-1));
                }else{
                    c = abs(x-s(a, d, m));
                }
            }else{
                cout << "error" << endl;
                exit(1);
            }
            break;
        }
        // not hit
        if(s(a, d, m) < x){     // 右
            l = m + 1;
        }else if(s(a, d, m) > x){   // 左
            r = m - 1;
        }
    }

    if(l > r){
        if(abs(x-s(a, d, 0)) < abs(x-s(a, d, n-1))){
            c = abs(x-s(a, d, 0));
        }else{
            c = abs(x-s(a, d, n-1));
        }
    }

    cout << c << endl;
    return 0;
}
