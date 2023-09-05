#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    double a, b; cin >> a >> b;
    // double tan = b/a;

    double r = abs(sqrt(a*a + b*b));
    cout << std::fixed <<  std::setprecision(10) << (1/r)*a << " " << (1/r)*b << endl;

    return 0;
}