#include <iostream>
#include <cmath>
#define MAX 20
using namespace std;
int main(){
    int A[MAX+1]={},B[MAX+1]={};
    int n,m=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i] >> B[i];
    }
    A[n]=A[0],B[n]=B[0];
    for (int i=1;i<=n;i++){
        m+=abs(A[i]-A[i-1])+abs(B[i]-B[i-1]);
    }
    cout << m;
    return 0;
}