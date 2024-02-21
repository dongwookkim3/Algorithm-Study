#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C,D;
    while(cin >> A >> B >> C >> D && (A || B || C || D)){
        if (A) cout << A << ' ';
        else cout << D/B/C << ' ';
        if (B) cout << B << ' ';
        else cout << D/C/A << ' ';
        if (C) cout << C << ' ';
        else cout << D/A/B << ' ';
        if (D) cout << D << "\n";
        else cout << A*B*C << "\n";
    }
    return 0;
}