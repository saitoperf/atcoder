#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n = 10;
    vector<ll> s(n);
    for(int i = 0; i < 10; i++){
        s[i] = n-i;
    }
    for(auto ss : s){
        cout << ss << " ";
    }
    cout << endl;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(s[j] > s[j+1]){
                swap(s[j], s[j+1]);
            }
        }
    }

    for(auto ss : s){
        cout << ss << " ";
    }
    cout << endl;
    return 0;
}