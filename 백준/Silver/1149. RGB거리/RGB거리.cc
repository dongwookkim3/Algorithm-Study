#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    int n;
    int A[MAX+1][4]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=3;j++){
            cin >> A[i][j];
            int m=1000000;
            for (int k=1;k<=3;k++){
                if (k==j) continue;
                if (A[i-1][k]<m){
                    m=A[i-1][k];
                }
            }
            A[i][j]+=m;
        }
    }
    cout << min(A[n][1],min(A[n][2],A[n][3]));
    return 0;
}