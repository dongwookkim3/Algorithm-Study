#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=3;i++){
        vector<int> A(n);
        for (int j=0;j<n;j++){
            cin >> A[j];
        }
        if (find(A.begin(),A.end(),7)==A.end()){
            cout << '0';
            return 0;
        }
    }
    cout << "777";
    return 0;
}