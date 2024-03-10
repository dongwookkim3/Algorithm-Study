#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n),B={1};
    while(n--){
        cin >> A[n];
    }
    sort(A.begin(),A.end());
    for (int i=1;i<A.size();i++){
        if (A[i-1]==A[i]){
            B.push_back(B.back()+1);
        }
        else {
            B.push_back(1);
        }
    }
    cout << *max_element(B.begin(),B.end());
    return 0;
}