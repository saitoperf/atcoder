#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s; cin >> s;
    if(s.size() == 1){
        s = s+s+s+s+s+s;
    }else if(s.size() == 2){
        s = s+s+s;
    }else{
        s = s+s;
    }
    cout << s << endl;
    return 0;
}