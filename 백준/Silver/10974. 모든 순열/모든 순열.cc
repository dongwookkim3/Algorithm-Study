#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void backtracking(vector<int> &A,vector<int> &B,int n){
    if (n==0){
        for (int i=0;i<B.size();i++){
            cout << B[i] << ' ';
        }
        cout << "\n";
        B.pop_back();
        return;
    }
    for (int i=0;i<A.size();i++){
        if (find(B.begin(),B.end(),A[i])==B.end()){
            B.push_back(A[i]);
            backtracking(A,B,n-1);
        }
    }
    B.pop_back();
}
int main(){
    vector<int> A,B;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        A.push_back(i);
    }
    backtracking(A,B,n);
    return 0;
}