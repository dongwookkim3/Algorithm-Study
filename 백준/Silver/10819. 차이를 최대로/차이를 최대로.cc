#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> B;
void backtracking(vector<int> &A,int n,int &m){
    if (n==0){
        int s=0;
        for (int i=1;i<B.size();i++){
            s+=abs(A[B[i]]-A[B[i-1]]);
        }
        m=max(m,s);
        B.pop_back();
        return;
    }
    for (int i=0;i<A.size();i++){
        if (find(B.begin(),B.end(),i)==B.end()){
            B.push_back(i);
            backtracking(A,n-1,m);
        }
    }
    B.pop_back();
}
int main(){
    int n,m=0;
    cin >> n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    backtracking(A,n,m);
    cout << m;
    return 0;
}