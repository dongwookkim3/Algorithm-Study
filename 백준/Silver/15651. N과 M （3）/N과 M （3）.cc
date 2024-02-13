#include <iostream>
#include <vector>
using namespace std;
vector<int> A,B;
void backtracking (int n,int m){
    if (m==0){
        for (int i=0;i<B.size();i++){
            cout << B[i] << ' ';
        }
        cout << "\n";
        B.pop_back();
        return;
    }
    for (int i=0;i<n;i++){
        B.push_back(A[i]);
        backtracking(n,m-1);
    }
    B.pop_back();
}
int main(){
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        A.push_back(i);
    }
    backtracking(n,m);
    return 0;
}