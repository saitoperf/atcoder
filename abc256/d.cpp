#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    vector<pair<ll, ll>> LR(n); for(ll i = 0; i < n; i++) cin >> LR[i].first >> LR[i].second;
    
    sort(LR.begin(), LR.end());
    vector<pair<ll, ll>> mrg;
    pair<ll, ll> last;

    ll L = LR[0].first;
    for(ll i = 1; i < n; i++){
        if(L != LR[i].first){
            mrg.push_back(LR[i-1]);
            L = LR[i].first;
            last = LR[i-1];
        }
    }
    // 最後の右集合
    if(LR[n-1].first != last.first){
        mrg.push_back(LR[n-1]);
    }

    vector<pair<ll, ll>> ans;
    ans.push_back(pair<ll, ll>(mrg[0].first, mrg[0].second));
    for(ll i = 1; i < (ll)mrg.size()-1; i++){
        if((*(ans.end()-1)).second >= mrg[i+1].first){
            *(ans.end()-1) = pair<ll, ll>( (*(ans.end()-1)).first, mrg[i+1].second);
        }else{
            ans.push_back( pair<ll, ll>(mrg[i+1].first, mrg[i+1].second) );
        }
    }

    // answer
    for(ll i = 0; i < (ll)ans.size(); i++){
        if(ans[i].first != ans[i+1].first){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
