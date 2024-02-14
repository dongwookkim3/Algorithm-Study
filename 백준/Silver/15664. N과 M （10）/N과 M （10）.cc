#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 8
using namespace std;
vector<int> A,B,C(MAX+1,0);
void backtracking (int n,int m){
    if (m==0){
        for (int i=0;i<B.size();i++){
            cout << B[i] << ' ';
        }
        cout << "\n";
        B.pop_back();
        return;
    }
    int v=-1;
    for (int i=0;i<n;i++){
        if (v!=A[i] && !C[i]){
            if (!B.empty() && A[i]<B.back()){
                continue;
            }
            v=A[i];
            C[i]=1;
            B.push_back(A[i]);
            backtracking(n,m-1);
            C[i]=0;
        }
    }
    B.pop_back();
}
int main(){
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    backtracking(n,m);
    return 0;
}