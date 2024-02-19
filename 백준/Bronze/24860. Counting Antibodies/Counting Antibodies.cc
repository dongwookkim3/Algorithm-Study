#include <iostream>
using namespace std;
int main(){
    long long A,B,C,D,M;
    cin >> A >> B >> C >> D;
    M=A*B+C*D;
    cin >> A >> B >> C;
    cout << M*A*B*C;
    return 0;
}