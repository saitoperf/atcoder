#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

int main(){
    ll n, x, y; cin >> n >> x >> y;
    x--; y--;
    Graph tree(n);
    for(int i = 0; i < n-1; i++){
        ll u, v; cin >> u >> v;
        u--; v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<ll> ans;
    auto dfs = [&](auto f, int v, int p=-1) -> bool{
        if(v == x){ // スタート地点=ゴール地点
            ans.push_back(v);
            return true;
        }
        for(int u : tree[v]){
            if(u == p) continue;    // p=親
            if(f(f, u, v)) {
                ans.push_back(v);
                return true;
            }
        }
        return false;
    };

    dfs(dfs, y);
    for(auto a : ans){
        cout << a+1 << " ";
    }
    cout << endl;

    return 0;
}
