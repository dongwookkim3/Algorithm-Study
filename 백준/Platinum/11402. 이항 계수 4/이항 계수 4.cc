#include <iostream>
#define MAX 2000
using namespace std;
int main(){
    long long n,m,k,s=1;
    long long A[MAX+1][MAX+1]={};
    cin >> n >> m >> k;
    for (int i=0;i<=k;i++){
        for (int j=0;j<=i;j++){
            if (i==0 && j==0) A[i][j]=1;
            else A[i][j]=(A[i-1][j]+A[i-1][j-1])%k;
        }
    }
    while(n!=0 || m!=0){
        s=(s*A[n%k][m%k])%k;
        n/=k;
        m/=k;
    }
    cout << s;
    return 0;
}