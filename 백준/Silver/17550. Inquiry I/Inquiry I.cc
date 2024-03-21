#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,s=0;
    cin >> n >> m;
    m*=m;
    vector<long long> A(n-1),B;
    for (int i=0;i<n-1;i++){
        cin >> A[i];
        s+=A[i];
    }
    for (int i=0;i<n-1;i++){
        B.push_back(m*s);
        m+=A[i]*A[i];
        s-=A[i];
    }
    sort(B.begin(),B.end());
    cout << B.back();
    return 0;
}