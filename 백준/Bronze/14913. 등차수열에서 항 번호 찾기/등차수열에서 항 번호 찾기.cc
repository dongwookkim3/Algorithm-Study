#include <iostream>
using namespace std;
int main(){
    long long A,B,K;
    cin >> A >> B >> K;
    if ((K-A)/B*B+A!=K || (A>0 && B>0 && A>K)) cout << 'X';
    else cout << (K-A)/B+1;
    return 0;
}