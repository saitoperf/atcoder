#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

int main(){
    ld x, y, d; cin >> x >> y >> d;
    ld theta, r;

    if(x == 0 && y == 0){
        cout << 0 << " " << 0 << endl;
    }else{
        theta = atan2(y, x);
        r = sqrt(x*x + y*y);
        cout << std::setprecision(20) << r*cos(theta + d*(M_PI)/180) << " " << r*sin(theta + d*(M_PI)/180) << endl;
    }

    return 0;
}