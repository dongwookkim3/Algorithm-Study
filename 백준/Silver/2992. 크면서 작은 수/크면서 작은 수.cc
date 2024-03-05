#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> A,C;
vector<char> B;
string b;
void backtracking(int n){
    if (n==0){
        A.push_back(stoi(b));
        C.pop_back();
        return;
    }
    for (int i=0;i<B.size();i++){
        if (find(C.begin(),C.end(),i)==C.end()){
            b+=B[i];
            C.push_back(i);
            backtracking(n-1);
            b.pop_back();
        }
    }
    C.pop_back();
}
int main(){
    string a;
    cin >> a;
    for (int i=0;i<a.length();i++){
        B.push_back(a[i]);
    }
    backtracking(a.length());
    sort(A.begin(),A.end());
    for (int i=0;i<A.size();i++){
        if (A[i]>stoi(a)){
            cout << A[i];
            return 0;
        }
    }
    cout << 0;
    return 0;
}