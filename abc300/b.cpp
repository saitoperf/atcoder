#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool cmp(const vector<string> &a, const vector<string> &b, ll h){
    for(ll i = 0; i < h; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void print(const vector<string> &a){
    cout << endl;
    for(ll i = 0; i < (ll)a.size(); i++){
        cout << a[i] << endl;
    }
}

// 1シフト
void row_shift(vector<string> &a, vector<string> &b){
    string s(a[0]);
    for(ll i = 0; i < (ll)a.size()-1; i++){
        a[i] = a[i+1];
    }
    a[(ll)a.size()-1] = s;
}

void col_shift(vector<string> &a, vector<string> &b){
    string s;
    for(ll i = 0; i < (ll)a.size(); i++){
        s.push_back(a[i][0]);
    }
    for(ll j = 0; j < (ll)a[0].size()-1; j++){
        for(ll i = 0; i < (ll)a.size(); i++){
            a[i][j] = a[i][j+1];
        }
    }
    for(ll i = 0; i < (ll)a.size(); i++){
        a[i][a[0].size()-1] = s[i];
    }
    // print(a);
}

int main(){
    ll h, w; cin >> h >> w;
    vector<string> a(h), b(h);
    for(ll i = 0; i < h; i++)cin >> a[i];
    for(ll i = 0; i < h; i++)cin >> b[i];

    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(cmp(a, b, h) == true){
                cout << "Yes" << endl;
                return 0;
            }
            col_shift(a, b);
        }
        col_shift(a, b);
        row_shift(a, b);
    }

    cout << "No" << endl;
    return 0;
}