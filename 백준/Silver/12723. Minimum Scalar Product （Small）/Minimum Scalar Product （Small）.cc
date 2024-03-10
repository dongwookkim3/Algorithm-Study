#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        long long n,m=0;
        cin >> n;
        vector<long long> A(n),B(n);
        for (int j=0;j<n;j++){
            cin >> A[j];
        }
        for (int j=0;j<n;j++){
            cin >> B[j];
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end(),greater<int>());
        while(n--){
            m+=A[n]*B[n];
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}