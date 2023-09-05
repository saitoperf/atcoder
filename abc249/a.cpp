#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll A, B, C, D, E, F, X; 
    cin >> A >> B >> C >> D >> E >> F >> X;

    ll x = X;
    ll ans1 = 0;
    while(true){
        if(x - (A+C) >= 0){
            ans1 += A*B;
            x -= (A+C);
        }else if(x - A >= 0){
            ans1 += A*B;
            break;
        }else{
            ans1 += B*x;
            break;
        }
    }

    x = X;
    ll ans2 = 0;
    while(true){
        if(x - (D+F) >= 0){
            ans2 += D*E;
            x -= (D+F);
        }else if(x - D >= 0){
            ans2 += D*E;
            break;
        }else{
            ans2 += E*x;
            break;
        }
    }
    if(ans1 > ans2){
        cout << "Takahashi" << endl;
    }else if(ans1 < ans2){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }
    return 0;
}