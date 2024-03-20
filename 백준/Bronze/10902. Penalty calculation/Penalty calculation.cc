#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n),B(n);
    for (int i=0;i<n;i++){
        cin >> A[i] >> B[i];
    }
    int index=find(B.begin(),B.end(),*max_element(B.begin(),B.end()))-B.begin();
    if (B[index]==0) cout << 0;
    else cout << A[index]+index*20;
    return 0;
}