#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    vector<int> B=A;
    for (int i=0;i<n;i++){
        cout << max(abs(A[i]-*max_element(B.begin(),B.end())),abs(A[i]-*min_element(B.begin(),B.end()))) << "\n";
    }
    return 0;
}