#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A,B;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push_back(a);
        if (i==0){
            B.push_back(1);
        }
        else if (A[i]>=A[i-1]){
            B.push_back(B.back()+1);
        }
        else {
            B.push_back(1);
        }
    }
    cout << *max_element(B.begin(),B.end());
    return 0;
}