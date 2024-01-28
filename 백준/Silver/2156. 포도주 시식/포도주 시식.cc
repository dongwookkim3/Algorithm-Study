#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;
int main(){
    int n;
    int A[MAX+1]={};
    long long B[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    B[1]=A[1];
    B[2]=A[1]+A[2];
    for (int i=2;i<=n;i++){
        B[i]=max(B[i-2]+A[i],B[i-3]+A[i-1]+A[i]);
        B[i]=max(B[i-1],B[i]);
    }
    cout << B[n];
    return 0;
}