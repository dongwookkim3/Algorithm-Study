#include <iostream>
using namespace std;
long long bpow(long long A,long long B,long long C){
    if (B==1) return A%C;
    long long T=bpow(A,B/2,C)%C;
    if (B%2==0) return T*T%C;
    else return T*T%C*A%C;
}
int main(){
    long long A,B,C;
    cin >> A >> B >> C;
    cout << bpow(A,B,C);
    return 0;
}