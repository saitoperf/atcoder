#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    double a, b, c, x; cin >> a >> b >> c >> x;
    double ans;
    if(x <= a){
        ans = 1.0;
    }else if(x > b){
        ans = 0.0;
    }else{
        ans = c/(b-a);
    }
    cout << ans << endl;
    return 0;
}