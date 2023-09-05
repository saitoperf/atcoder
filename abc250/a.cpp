#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll h, w, r, c; 
    cin >> h >> w;
    cin >> r >> c;

    ll ans = 0;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i==r && j==c){
                continue;
            }
            if(abs(r-i)+abs(c-j) == 1){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}