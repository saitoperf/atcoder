#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;

vector<bool> seen;
void dfs(const Graph &tree, ll v, ll end){
    // vを訪問済みにする
    seen[v] = true;
    cout << v << " ";

    // vから行ける各頂点
    for(auto next_v : tree[v]){
        dfs(tree, next_v, end);
    }
}

int main(){
    ll n, x, y; cin >> n >> x >> y;
    Graph tree(n);
    for(int i = 0; i < n-1; i++){
        ll u, v; cin >> u >> v;
        tree[u-1].push_back(v-1);
        tree[v-1].push_back(u-1);
    }

    // cout << endl;
    // for(auto t : tree){
    //     for(auto tt : t){
    //         cout << tt  << " ";
    //     }
    //     cout << endl;
    // }

    seen.assign(n, false);
    dfs(tree, 2, 0);

    // for(auto s : seen){
    //     cout << s << " ";
    // }



    return 0;
}

