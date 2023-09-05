#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> a(k); for(ll i = 0; i < k; i++) cin >> a[i]; // 調査する人
    vector<ll> x(n), y(n); for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];   // 座標

    vector<pair<double, double>> p1;   // 調査する人 k
    vector<pair<double, double>> p2;   // 調査される人 n-k
    
    ll ki = 0;
    for(ll i = 0; i < n; i++){
        if(i == a[ki]-1){ // 調査する人なら
            p1.push_back(pair<double, double>(x[i], y[i]));
            ki++;
        }else{
            p2.push_back(pair<double, double>(x[i], y[i]));
        }
    }

    double ans = 0;
    for(ll i = 0; i < (ll)p2.size(); i++){  // 調査される人
        double mindist = pow(10, 30);
        for(ll j = 0; j < (ll)p1.size(); j++){  // 調査する人
            if(sqrt((p2[i].first - p1[j].first)*(p2[i].first - p1[j].first) + (p2[i].second - p1[j].second)*(p2[i].second - p1[j].second)) < mindist){
                mindist = sqrt((p2[i].first - p1[j].first)*(p2[i].first - p1[j].first) + (p2[i].second - p1[j].second)*(p2[i].second - p1[j].second));
            }
        }
        if(mindist > ans){
            ans = mindist;
        }
    }

    cout << setprecision(20) << ans << endl;
    return 0;
}