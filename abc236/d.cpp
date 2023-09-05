#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n; cin >> n;
    vector<ll> a;
    int c = 0;
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < (2*n-1)-i; j++){
            ll aa; cin >> aa;
            a.push_back(aa);
            c++;
        }
    }
    ll ans = 0;

    for(int i = 0; i < n; i++){
        if(i+1 == n) break;
        for(int j = i+1; j < n; j++){
            // (i, j)

            if(j+1 == n) break;
            cout << "(" << i << ", " << j << ") : " << endl;
            for(int k = j+1; k < n; k++){
                if(k+1 == n) break;
                cout << "\t";
                for(int l = k+1; l < n; l++){
                    cout << "(" << k << "," << l << "), ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}

/*
8
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
1 2 3 4 5 6 7 8 9 10 11 12 13 14
1 2 3 4 5 6 7 8 9 10 11 12 13
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/