#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    bool r = 0;
    bool f = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'o'){
            r = 1;
        }
        if(s[i] == 'x'){
            f = 1;
        }
    }

    if(r == 1 && f == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}