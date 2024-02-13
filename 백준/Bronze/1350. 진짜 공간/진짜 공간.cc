#include <iostream>
#include <vector>
#define MAX 50
using namespace std;
int main(){
    vector<int> A(MAX);
    long long n,m=0,k;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    cin >> k;
    for (int i=0;i<n;i++){
        if (A[i]%k==0) m+=A[i]/k;
        else m+=A[i]/k+1;
    }
    cout << m*k;
    return 0;
}