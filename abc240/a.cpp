#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll a, b; cin >> a >> b;
    if (a == 10 && b == 9 || a == 10 && b == 1){
        cout << "Yes" << endl;
    }else if (a == 1 && b == 10 || a == 1 && b == 2){
        cout << "Yes" << endl;
    }else if(b == 10 && a == 9 || b == 10 && a == 1){
        cout << "Yes" << endl;
    }else if(b == 1 && a == 10 || b == 1 && a == 2){
        cout << "Yes" << endl;
    }else if(a == b+1 || a == b-1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}