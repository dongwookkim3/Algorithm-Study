#include <iostream>
using namespace std;
unsigned long long bpow(unsigned long long A,unsigned long long B,unsigned long long C){
    if (B==1) return A%C;
    unsigned long long T=bpow(A,B/2,C)%C;
    if (B%2==0) return T*T%C;
    else return T*T%C*A%C;
}
bool Prime(unsigned long long n,unsigned long long A){
    if(A%n==0) return true;
    unsigned long long k=n-1;
    while(true){
        unsigned long long t=bpow(A,k,n);
        if(t==n-1) return true;
        if(k%2==1) return (t==1 || t==n-1);
        k/=2;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long n,m=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        unsigned long long A;
        cin >> A;
        if (!Prime(A*2+1,2) || !Prime(A*2+1,7) || !Prime(A*2+1,61)){
            m++;
        }
    }
    cout << n-m;
}