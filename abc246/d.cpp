#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;

int main(){
    ull n; cin >> n;

    ull i = 0;
    while(1){
        if((i+i)*(i*i + i*i) >= n){
            break;
        }
        i++;
    }

    for(ull j = 0; j <= i; j++){
        if((i+j)*(i*i + j*j) >= n){
            // cout << i << ", " << j << endl;
            cout << (i+j)*(i*i + j*j) << endl;
            break;
        }
    }

    return 0;
}
