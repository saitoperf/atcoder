#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;

    vector<string> s(n+1);
    s[1] = "1";
    for(ll i = 2; i <= n; i++){
        string ss = to_string(i);
        s[i] = s[i-1] + ss + s[i-1];
    }
    cout << s[n][0];
    for(ll i = 1; i < (ll)s[n].size(); i++){
        cout << " " << s[n][i];
    }
    cout << endl;
    return 0;
}