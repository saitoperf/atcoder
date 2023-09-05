#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool IsPrime(ll num){
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (ll i = 3; i <= sqrtNum; i += 2){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ll a, b, c, d; cin >> a >> b >> c >> d;

    ll T, A;
    for(T = a; T <= b; T++){
        for(A = c; A <= d; A++){
            if(IsPrime(T+A)){
                break;
            }
        }
        if(A == d+1){
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;
    return 0;
}