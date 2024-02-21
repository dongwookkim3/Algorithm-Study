#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    while(cin >> A >> B >> C >> D && (A || B || C || D)){
        cout << C-B << ' ' << D-A << "\n";
    }
    return 0;
}