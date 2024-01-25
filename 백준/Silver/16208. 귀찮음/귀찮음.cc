#include <iostream>
#include <algorithm>
#define MAX 500000
using namespace std;
int main(){
    long long n,m=0;
    long long A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    sort(A+1,A+n+1);
    for (int i=2;i<=n;i++){
        m+=A[1]*A[i];
        A[1]+=A[i];
    }
    cout << m;
    return 0;
}