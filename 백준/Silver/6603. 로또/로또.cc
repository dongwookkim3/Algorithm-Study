#include <iostream>
#include <vector>
#define MAX 6
using namespace std;
vector<int> A,B;
void backtracking(int n,int m){
    if (m==0){
        for (int i=0;i<MAX;i++){
            cout << B[i] << ' ';
        }
        cout << "\n";
        return;
    }
    for (int i=0;i<n;i++){
        if (!B.empty() && A[i]<=B.back()){
            continue;
        }
        B.push_back(A[i]);
        backtracking(n,m-1);
        B.pop_back();
    }
}
int main(){
    int n;
    while(cin >> n && n!=0){
        for (int i=0;i<n;i++){
            int a;
            cin >> a;
            A.push_back(a);
        }
        backtracking(n,MAX);
        cout << "\n";
        A.clear();
    }
    return 0;
}