#include <iostream>
#include <map>
#define MOD 1000000007
using namespace std;
map<long long,long long> A;
long long f(long long n){
    if (n<=1) return n;
    else if (n==2) return 1;
    else if (A.find(n)!=A.end()){
        return A[n];
    }
    long long k=n/2;
    A[n]=(f(k+1)*f(n-k)+f(k)*f(n-k-1))%MOD;
    return A[n];
}
int main(){
    long long n;
    cin >> n;
    cout << f(n);
    return 0;
}