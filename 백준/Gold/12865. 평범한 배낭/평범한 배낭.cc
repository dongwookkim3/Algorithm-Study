#include <iostream>
#include <algorithm>
#define MAX 100
#define KMAX 100000
using namespace std;
int main(){
    int n,k;
    int A[MAX+1]={};
    int B[MAX+1]={};
    long long V[MAX+1][KMAX+1]={};
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        cin >> A[i] >> B[i];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=k;j++){
            if (j>=A[i]){
                V[i][j]=max(V[i-1][j],V[i-1][j-A[i]]+B[i]);
            }
            else {
                V[i][j]=V[i-1][j];
            }
        }
    }
    cout << V[n][k];
}