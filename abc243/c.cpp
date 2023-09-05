#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<ll> x(n), y(n); for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];
    vector<char> s(n); for(ll i = 0; i < n; i++) cin >> s[i];

    unordered_map<ll, ll> mp_L;   // map< key=y, val=L_max >
    unordered_map<ll, ll> mp_R;   // map< key=y, val=R_min >

    for(ll i = 0; i < n; i++){
        if(s[i] == 'L'){
            if(mp_L.find(y[i]) != mp_L.end()){
                if(mp_L[y[i]] < x[i]){
                    mp_L[y[i]] = x[i];
                }
            }else{
                mp_L[y[i]] = x[i];
            }
            if(mp_R.find(y[i]) != mp_R.end()){
                if(mp_L[y[i]] >= mp_R[y[i]]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }

        if(s[i] == 'R'){
            if(mp_R.find(y[i]) != mp_R.end()){
                if(mp_R[y[i]] > x[i]){
                    mp_R[y[i]] = x[i];
                }
            }else{
                mp_R[y[i]] = x[i];
            }
            if(mp_L.find(y[i]) != mp_L.end()){
                if(mp_L[y[i]] >= mp_R[y[i]]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        // if(mp_L.find(y[i])!=mp_L.end() && mp_R.find(y[i])!=mp_R.end()){
        //     if(mp_L[y[i]] >= mp_R[y[i]]){
        //         cout << "Yes" << endl;
        //         return 0;
        //     }
        // }
    }

    // for(ll i = 0; i < n; i++){
    //     if(mp_L.find(y[i])!=mp_L.end() && mp_R.find(y[i])!=mp_R.end()){
    //         if(mp_L[y[i]] >= mp_R[y[i]]){
    //             cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    // }

    cout << "No" << endl;
    return 0;
}
