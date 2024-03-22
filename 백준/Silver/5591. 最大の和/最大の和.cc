#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;
    cin >> n >> m;
    vector<long long> A(n),B;
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i){
            A[i]+=A[i-1];
        }
    }
    B.push_back(A[m-1]);
    for (long long i=m;i<n;i++){
        B.push_back(A[i]-A[i-m]);
    }
    cout << *max_element(B.begin(),B.end());
    return 0;
}