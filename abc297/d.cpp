#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

int main(){
    ll a, b; cin >> a >> b;

    ll c = 0;
    while(true){
        // cout << a << " " << b << endl;
        if(b > a){
            c += b / a;
            if(b % a == 0){
                c--;
                break;
            }
            b = b % a;
        }else if(a > b){
            c += a / b;
            if(a % b == 0){
                c--;
                break;
            }
            a = a % b;
        }else{
            break;
        }
    }
    cout << c << endl;

    return 0;
}