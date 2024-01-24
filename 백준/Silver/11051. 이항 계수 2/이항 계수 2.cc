#include <iostream>
#define MAX 1001
using namespace std;
int main(){
    long long A[MAX+1][MAX+1]={};
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            if (i==j || j==1) A[i][j]=1;
            else A[i][j]=(A[i-1][j]+A[i-1][j-1])%10007;
        }
    }
    int n,m;
    cin >> n >> m;
    cout << A[n+1][m+1];
    return 0;
}