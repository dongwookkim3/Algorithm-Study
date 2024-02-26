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
    sort(B.begin(),B.end());
    for (int i=0;i<n;i++){
        cout << find(B.begin(),B.end(),A[i])-B.begin()+1 << "\n";
    }
    return 0;
}