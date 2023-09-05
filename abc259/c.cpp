#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s, t; cin >> s >> t;

    ll ti=0, si=0;
    ll tc, sc;
    while(true){
        if(t[ti] != s[si]){
            cout << "No" << endl;
            break;
        }

        tc = 0;
        while(true){
            if(ti < (ll)t.size()){
                if(t[ti] == t[ti+1]){
                    ti++; tc++;
                }else{
                    break;
        }}}

        sc = 0;
        while(true){
            if(si < (ll)s.size()){
                if(s[si] == s[si+1]){
                    si++; sc++;
                }else{
                    break;
        }}}

        if(tc < sc){
            cout << "No" << endl;
            break;
        }
        if(sc == 0 && tc > 0){
            cout << "No" << endl;
            break;
        }
        ti++; si++;
        if(ti == (ll)t.size() && si == (ll)s.size()){
            cout << "Yes" << endl;
            break;
        }
    }
    return 0;
}