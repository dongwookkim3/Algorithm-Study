#include <iostream>
using namespace std;
long long GCD(long long A,long long B){
    if (!B) return A;
    return GCD(B,A%B);
}
long long LCM(long long A,long long B){
    return A*B/GCD(A,B);
}
int main(){
    long long n,m;
    cin >> n >> m;
    for (int i=0;i<n-3;i++){
        long long a;
        cin >> a;
        m=LCM(m,a);
    }
    cout << m;
    return 0;
}