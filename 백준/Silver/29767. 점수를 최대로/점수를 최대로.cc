#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n,k,m=0;
    cin >> n >> k;
    vector<long long> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i!=0){
            A[i]+=A[i-1];
        }
    }
    sort(A.begin(),A.end());
    while(k--){
        m+=A.back();
        A.pop_back();
    }
    cout << m;
    return 0;
}