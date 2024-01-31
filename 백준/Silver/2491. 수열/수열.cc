#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100000
using namespace std;
int main(){
    int n;
    vector<int> A(MAX,0);
    vector<int> B={1},C={1};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i!=0){
            if (A[i]>=A[i-1]){
                B.push_back(B.back()+1);
            }
            else {
                B.push_back(1);
            }
            if (A[i]<=A[i-1]){
                C.push_back(C.back()+1);
            }
            else {
                C.push_back(1);
            }
        }
    }
    sort(B.begin(),B.end(),greater<int>());
    sort(C.begin(),C.end(),greater<int>());
    cout << max(B[0],C[0]);
    return 0;
}