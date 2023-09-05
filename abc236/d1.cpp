#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<vector<ll>> a(2*n-1, vector<ll>(2*n-1));
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            cin >> a[i][j];
        }
    }


    return 0;
}