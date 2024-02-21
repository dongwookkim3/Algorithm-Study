#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
int main(){
    vector<int> A(MAX),B(MAX);
    int n,m=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        cin >> B[i];
        m+=abs(A[i]-B[i]);
    }
    cout << m/2;
    return 0;
}