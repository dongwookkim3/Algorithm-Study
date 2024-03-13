#include <iostream>
#include <vector>
using namespace std;
long long GCD(long long A,long long B){
    if (!B) return A;
    return GCD(B,A%B);
}
long long LCM(long long A,long long B){
    return A*B/GCD(A,B);
}
int main(){
    long long n,m=0;
    cin >> n;
    vector<long long> A(n);
    while(n--){
        cin >> A[n];
    }
    long long L=A.front();
    for (int i=1;i<A.size();i++){
        L=LCM(L,A[i]);
    }
    for (int i=0;i<A.size();i++){
        m+=L/A[i];
    }
    cout << L/GCD(L,m) << '/' << m/GCD(L,m);
    return 0;
}