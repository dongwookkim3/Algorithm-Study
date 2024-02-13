#include <iostream>
#include <algorithm>
#define MAX 50
using namespace std;
int main(){
    int n,k,m1=0,m2=0;
    int A[MAX+1][MAX+1]={};
    int B[MAX+1][MAX+1]={};
    int C[MAX+1][MAX+1]={};
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        string a;
        cin >> a;
        a.insert(a.begin(),'0');
        for (int j=1;j<=k;j++){
            if (a[j]=='X'){
                A[i][j]=1;
                B[i][j]=1;
                C[i][j]=1;
            }
            B[i][j]+=B[i][j-1];
            C[i][j]+=C[i-1][j];
        }
    }
    for (int i=1;i<=n;i++){
        if (!B[i][k]){
            m1++;
        }
    }
    for (int i=1;i<=k;i++){
        if (!C[n][i]){
            m2++;
        }
    }
    cout << max(m1,m2);
    return 0;
}