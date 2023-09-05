#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll g, w, h; cin >> g >> w >> h;
    if(g < 0){
        g *= -1;
        w *= -1;
        h *= -1;
    }
    if(w < 0){
        cout << g << endl;
    }
    else if(w > g){
        cout << g << endl;
    }
    // h3
    else if(w < h && w < g){
        cout << -1 << endl;
    }
    else if(w < h && w > g){
        cout << g << endl;
    }
    // h2
    else if(h < w && h > 0){
        cout << g << endl;
    }
    // h1
    else if(h < w && h < 0){
        cout << abs(h)*2+g << endl;
    }

    return 0;
}