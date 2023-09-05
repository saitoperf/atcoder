#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}