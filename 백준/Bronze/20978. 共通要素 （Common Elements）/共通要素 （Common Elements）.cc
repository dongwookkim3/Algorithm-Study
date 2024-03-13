#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n),B,C(m);
    while(n--){
        cin >> A[n];
    }
    while(m--){
        cin >> C[m];
    }
    sort(A.begin(),A.end());
    sort(C.begin(),C.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    C.erase(unique(C.begin(),C.end()),C.end());
    while(!C.empty()){
        A.push_back(C.back());
        C.pop_back();
    }
    sort(A.begin(),A.end());
    for (int i=1;i<A.size();i++){
        if (A[i-1]==A[i] && find(B.begin(),B.end(),A[i])==B.end()){
            cout << A[i] << "\n";
            B.push_back(A[i]);
        }
    }
    return 0;
}