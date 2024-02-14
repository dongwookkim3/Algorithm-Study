#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if (A==0 && B==0) cout << "Not a moose";
    else if (A!=B) cout << "Odd " << max(A,B)*2;
    else cout << "Even " << A*2;
    return 0;
}