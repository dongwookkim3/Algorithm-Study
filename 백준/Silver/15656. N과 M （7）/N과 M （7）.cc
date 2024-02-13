#include <iostream>
#include <vector>
#include <algorithm>
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
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    backtracking(n,m);
    return 0;
}