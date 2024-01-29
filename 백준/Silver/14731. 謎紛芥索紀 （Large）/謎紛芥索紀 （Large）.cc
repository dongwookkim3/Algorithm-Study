#include <iostream>
#define MOD 1000000007
using namespace std;
long long bpow(long long A,long long B){
    if (B==0) return 1;
    else if (B==1) return A%MOD;
    long long T=bpow(A,B/2)%MOD;
    if (B%2==0) return T*T%MOD;
    else return T*T%MOD*A%MOD;
}
int main(){
    long long n,m=0;
    cin >> n;
    while(n--){
        long long a,b;
        cin >> a >> b;
        m+=((a*b)%MOD*bpow(2,b-1)%MOD);
    }
    cout << m%MOD;
    return 0;
}