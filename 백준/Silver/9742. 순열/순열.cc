#include <iostream>
using namespace std;
string B;
void backtracking(string &A,int n,int &m){
    if (n==0){
        m--;
        if (m==0){
            cout << B << "\n";
        }
        B.pop_back();
        return;
    }
    for (int i=0;i<A.length();i++){
        if (B.find(A[i])==string::npos){
            B+=A[i];
            backtracking(A,n-1,m);
        }
    }
    B.pop_back();
}
int main(){
    string A;
    int n;
    while(cin >> A >> n){
        cout << A << ' ' << n << " = ";
        backtracking(A,A.length(),n);
        if (n>0){
            cout << "No permutation\n";
        }
        B.clear();
    }
    return 0;
}