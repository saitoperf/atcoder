#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll v, a, b, c; cin >> v >> a >> b >> c;
    while(1){
        if(v-a < 0){
            cout << "F" << endl;
            break;
        }
        v -= a;
        if(v-b < 0){
            cout << "M" << endl;
            break;
        }
        v -= b;
        if(v-c < 0){
            cout << "T" << endl;
            break;
        }
        v -= c;
    }
    return 0;
}