#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    vector<ll> x(3), y(3); for(int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    map<ll, ll> mx, my;
    for(int i = 0; i < 3; i++){
        mx[x[i]]++;
        my[y[i]]++;
    }
    ll ansx, ansy;
    for(int i = 0; i < 3; i++){
        if(mx[x[i]] == 1){
            ansx = x[i];
        }
        if(my[y[i]] == 1){
            ansy = y[i];
        }
    }
    cout << ansx << " " << ansy << endl;


    return 0;
}