#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    vector<ll> h(3); for(ll i = 0; i < 3; i++) cin >> h[i];
    vector<ll> w(3); for(ll i = 0; i < 3; i++) cin >> w[i];

    ll ans = 0;
    for(ll p00 = 1; p00 <= 28; p00++){
        for(ll p01 = 1; p01 <= 28; p01++){
            for(ll p10 = 1; p10 <= 28; p10++){
                for(ll p11 = 1; p11 <= 28; p11++){
                    ll p20 = w[0]-p00-p10;
                    ll p21 = w[1]-p01-p11;
                    ll p02 = h[0]-p00-p01;
                    ll p12 = h[1]-p10-p11;
                    // p22
                    if(p20 < 1 || p21 < 1 || p02 < 1 || p12 < 1){
                        continue;
                    }
                    if(h[2]-p20-p21 != w[2]-p02-p12){
                        continue;
                    }else{
                        if(h[2]-p20-p21 < 1){
                            continue;
                        }
                    }
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}