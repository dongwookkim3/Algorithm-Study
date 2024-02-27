#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A,B,C,D;
    while(cin >> A >> B >> C >> D && (A || B || C || D)){
        cout << (long long)pow(A,B*C*D) << "\n";
    }
    return 0;
}