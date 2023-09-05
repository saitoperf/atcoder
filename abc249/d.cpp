#include <bits/stdc++.h>
using namespace std;
using ll=long long;

template <typename T> struct PrimeFact {
    // member
    vector<T> spf;
    
    // コンストラクタ
    PrimeFact(T N) { 
        init(N); 
    }

    void init(T N) { // 前処理。spf を求める
        spf.assign(N + 1, 0);
        for (T i = 0; i <= N; i++) spf[i] = i;
        for (T i = 2; i * i <= N; i++) {
            if (spf[i] == i) {
                for (T j = i * i; j <= N; j += i) {
                    if (spf[j] == j) {
                        spf[j] = i;
                    }
                }
            }
        }
    }

    map<T, T> get(T n) { // nの素因数分解を求める
        map<T, T> m;
        while (n != 1) {
            m[spf[n]]++;
            n /= spf[n];
        }
        return m;
    }
};

int main(){
    ll n; cin >> n;
    vector<ll> a(n); for(ll i = 0; i < n; i++) cin >> a[i];
    map<ll, ll> mp; for(ll i = 0; i < n; i++) mp[a[i]]++;

    vector<PrimeFact<ll>> vpf;
    for(auto m : mp){
        cout << m.first << endl;
        vpf.push_back(m.first);
        for(auto m2 : (vpf.end()-1)->get(m.first)){
            cout << "    " << m2.first << " " << m2.second << endl;
        }
    }

    return 0;
}