#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    string s; cin >> s;
    // for(int i = 0; i < s.size()-1; i++){
    //     for(int j = 0; j < s.size()-i-1; j++){
    //         if(s[j] > s[j+1]){
    //             char tmp = s[j];
    //             s[j] = s[j+1];
    //             s[j+1] = tmp;
    //         }
    //         // cout << s << endl;
    //     }
    // }

    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}