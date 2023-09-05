#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<string> s(n), t(n); for(int i = 0; i < n; i++) cin >> s[i] >> t[i];

    vector<bool> flag(n, false);

    // 性
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(s[i] != s[j] && s[i] != t[j]){
                continue;
            }
            break;
        }
        if(j == n){
            flag[i] = true; // 名を使える
        }
    }

    // 名
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(t[i] != s[j] && t[i] != t[j]){
                continue;
                // ok
            }
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}