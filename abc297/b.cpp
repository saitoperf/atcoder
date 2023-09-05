#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s; cin >> s;
    ll bs = 0;
    ll r1 = -1, r2, k;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == 'B'){
            bs += i;
        }
        if(r1 == -1 && s[i] == 'R'){
            r1 = i;
        }else if(r1 != -1 && s[i] == 'R'){
            r2 = i;
        }
        if(s[i] == 'K'){
            k = i;
        }
    }

    bool flag = false;
    if(r1 < k && k < r2){
        flag = true;
    }

    if(bs % 2 == 1 && flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}