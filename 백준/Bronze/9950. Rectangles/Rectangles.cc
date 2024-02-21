#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    while(cin >> A >> B >> C && (A || B || C)){
        if (A) cout << A << ' ';
        else cout << C/B << ' ';
        if (B) cout << B << ' ';
        else cout << C/A << ' ';
        if (C) cout << C << "\n";
        else cout << A*B << "\n";
    }
    return 0;
}