#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX 1000
using namespace std;
int main(){
    long long n,m,s=0;
    long long A[MAX+1]={},B[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i] >> B[i];
    }
    for (int i=1;i<=m;i++){
        long long x,y;
        cin >> x >> y;
        for (int j=1;j<=n;j++){
            s=max(s,(A[j]-x)*(A[j]+-x)+(B[j]-y)*(B[j]-y));
        }
    }
    cout << s;
    return 0;
}