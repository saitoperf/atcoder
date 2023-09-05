#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n, x, y, z; cin >> n >> x >> y >> z;
    vector<ll> A(n); for(int i = 0; i < n; i++) cin >> A[i];        // 数学
    vector<ll> B(n); for(int i = 0; i < n; i++) cin >> B[i];        // 英語
    vector<ll> AB(n); for(int i = 0; i < n; i++) AB[i] = A[i]+B[i]; // 数学＋英語
    vector<bool> ans(n, false);                                     // 合格か

    // 1
    vector<pair<ll, ll>> a(n);
    for(int i = 0; i < n; i++){
        a[i] = make_pair(A[i], -i);
    }
    sort(a.rbegin(), a.rend()); // 数学の点でソート
    for(int i = 0; i < x; i++){
        ans[-a[i].second] = true;
    }

    // 2
    vector<pair<ll, ll>> b;
    for(int i = 0; i < n; i++){
        if(ans[i] == true){
            continue;
        }
        b.push_back(make_pair(B[i], -i));
    }
    sort(b.rbegin(), b.rend()); // 英語の点でソート
    for(int i = 0; i < y; i++){
        ans[-b[i].second] = true;
    }


    // 3
    vector<pair<ll, ll>> ab;
    for(int i = 0; i < n; i++){
        if(ans[i] == true){
            continue;
        }
        ab.push_back(make_pair(AB[i], -i));
    }
    sort(ab.rbegin(), ab.rend()); // 英語の点でソート
    for(int i = 0; i < z; i++){
        ans[-ab[i].second] = true;
    }

    for(int i = 0; i < n; i++){
        if(ans[i] == true){
            cout << i+1 << endl;
        }
    }

    return 0;
}