#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;

    vector<pair<ll, ll>> p1(8), p2(8);

    p1[0] = pair<ll, ll>(x1+1, y1-2);
    p1[1] = pair<ll, ll>(x1+1, y1+2);
    p1[2] = pair<ll, ll>(x1-1, y1-2);
    p1[3] = pair<ll, ll>(x1-1, y1+2);
    p1[4] = pair<ll, ll>(x1+2, y1-1);
    p1[5] = pair<ll, ll>(x1+2, y1+1);
    p1[6] = pair<ll, ll>(x1-2, y1-1);
    p1[7] = pair<ll, ll>(x1-2, y1+1);

    p1[0] = pair<ll, ll>(x2+1, y2-2);
    p2[1] = pair<ll, ll>(x2+1, y2+2);
    p2[2] = pair<ll, ll>(x2-1, y2-2);
    p2[3] = pair<ll, ll>(x2-1, y2+2);
    p2[4] = pair<ll, ll>(x2+2, y2-1);
    p2[5] = pair<ll, ll>(x2+2, y2+1);
    p2[6] = pair<ll, ll>(x2-2, y2-1);
    p2[7] = pair<ll, ll>(x2-2, y2+1);

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            // cout << p1[i].first << ", " << p1[i].second << endl;
            // cout << p2[j].first << ", " << p2[j].second << endl;
            if(p1[i].first == p2[j].first && p1[i].second == p2[j].second){
                cout << "Yes" << endl;
                return 0;
            }
            // cout << endl;
        }
    }
    cout << "No" << endl;
    return 0;
}