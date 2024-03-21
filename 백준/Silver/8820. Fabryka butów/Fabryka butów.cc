#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> A(n),B;
        B.push_back(0);
        for (int i=0;i<n;i++){
            cin >> A[i];
        }
        for (int i=n-2;i>=0;i--){
            A[i]+=A[i+1];
        }
        for (int i=0;i<n;i++){
            B.push_back(A[i]*(i+1-m));
        }
        sort(B.begin(),B.end(),greater<long long>());
        cout << B.front() << "\n";
    }
    return 0;
}