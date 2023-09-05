#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<int> a(4*n-1); for(int i = 0; i < 4*n-1; i++) cin >> a[i];

    vector<int> v(n, 4);
    for(auto aa : a){
        v[aa-1]--;
    }

    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            cout << i+1 << endl;;
            break;
        } 
    }
    return 0;
}