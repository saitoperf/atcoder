#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin >> n;

    vector<string> s(n+1);
    s[1] = "1";
    for(ll i = 2; i <= n; i++){
        string ss = to_string(i);
        s[i] = s[i-1] + " " +  ss + " " + s[i-1];
    }

    cout << s[n] << endl;
    return 0;
}
