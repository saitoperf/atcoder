#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<string> s(n), t(n); for(int i = 0; i < n; i++) cin >> s[i] >> t[i];

    string a;
    bool flag = true; // 使える
    for(int i = 0; i < n; i++){
        a = s[i]; flag = true;  // 性
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(a == s[j] || a == t[j]){
                flag = false;   // 使えない
                break;
            }
        }
        if(flag){   // 使えるなら次の人へ
            continue;
        }else{      // 性が使えないなら
            a = t[i]; flag = true;  // 名
            for(int j = 0; j < n; j++){
                if(i == j){
                    continue;
                }
                if(a == s[j] || a == t[j]){
                    flag = false;   // 使えない
                    break;
                }
            }
            if(flag){
                continue;   // 次の人へ
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}