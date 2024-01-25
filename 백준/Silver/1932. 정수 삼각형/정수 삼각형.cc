#include <iostream>
#include <algorithm>
#define MAX 500
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> A[i][j];
            A[i][j]+=max(A[i-1][j],A[i-1][j-1]);
        }
    }
    for (int i=1;i<=n;i++){
        if (m<A[n][i]){
            m=A[n][i];
        }
    }
    cout << m;
    return 0;
}