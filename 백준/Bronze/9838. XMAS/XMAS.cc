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
    for (int i=0;i<n;i++){
        cout << find(A.begin(),A.end(),i+1)-A.begin()+1 << "\n";
    }
    return 0;
}