#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int k; cin >> k;
    if(k >= 60){
        printf("22:%02d\n", k-60);
    }else{
        printf("21:%02d\n", k);
        // cout << "21:" << k << endl;
    }
    return 0;
}