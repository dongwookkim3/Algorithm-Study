#include<bits/stdc++.h>
using namespace std;
int main(){
    double A1,B1,C1,A2,B2,C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    double m=min({A1/A2,B1/B2,C1/C2});
    cout << fixed;
    cout.precision(6);
    cout << A1-A2*m << ' ' << B1-B2*m << ' ' << C1-C2*m;
    return 0;
}