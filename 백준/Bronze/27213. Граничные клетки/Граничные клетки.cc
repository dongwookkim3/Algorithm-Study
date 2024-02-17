#include <iostream>
using namespace std;
int main(){
    long long A,B;
    cin >> A >> B;
    if (A==1 || B==1) cout << max(A,B);
    else cout << 2*A+2*B-4;
    return 0;
}