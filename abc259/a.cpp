#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, m, x, t, d; cin >> n >> m >> x >> t >> d;
    if(m >= x){
        cout << t << endl;
    }else{
        cout << t-((x-m)*d) << endl;
    }
    return 0;
}