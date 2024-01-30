#include <iostream>
#define MOD 1000000007
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long A=1,B=1,k=MOD-2;
    for (long long i=m+1;i<=n;i++){
        A*=i;
        A%=MOD;
    }
    for (long long i=2;i<=n-m;i++){
        B*=i;
        B%=MOD;
    }
    while(k>0){
        if (k%2==1){
            A*=B;
            A%=MOD;
        }
        k/=2;
        B*=B;
        B%=MOD;
    }
    cout << A;
    return 0;
}