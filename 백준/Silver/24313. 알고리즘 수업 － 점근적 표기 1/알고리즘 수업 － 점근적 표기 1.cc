#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << (A*D+B<=C*D && A<=C);
    return 0;
}