#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n, m; cin >> n >> m;
    vector<string> s(n); for(int i = 0; i < n; i++) cin >> s[i];
    vector<string> t(m); for(int i = 0; i < m; i++) cin >> t[i];

    unordered_set<string> st(n);
    for(int i = 0; i < m; i++) {
        st.insert(t[i]);
    }

    for(int i = 0; i < n; i++) {
        if(st.find(s[i]) == st.end()){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}