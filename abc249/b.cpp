#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s; cin >> s;

    bool f1=false, f2=false;
    for(ll i = 0; i < (ll)s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){f1 = true;}
        if(s[i] >= 'A' && s[i] <= 'Z'){f2 = true;}
    }

    bool f3=true;
    for(ll i = 0; i < (ll)s.size(); i++){
        for(ll j = 0; j < (ll)s.size(); j++){
            if(j == i){
                continue;
            }
            if(s[i] == s[j]){
                f3 = false;
                break;
            }
        }
    }

    if(f1 == true && f2 == true && f3 == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}