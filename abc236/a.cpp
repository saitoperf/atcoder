#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s; cin >> s;
    int a, b; cin >> a >> b;

    char st = s[a-1];
    s[a-1] = s[b-1];
    s[b-1] = st;
    cout  << s << endl;
    return 0;
}