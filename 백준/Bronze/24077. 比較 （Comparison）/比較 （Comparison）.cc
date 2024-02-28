#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,s=0;
    cin >> n >> m;
    vector<int> A(n),B(m);
    while(n--){
        cin >> A[n];
    }
    while(m--){
        cin >> B[m];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for (int i=0;i<A.size();i++){
        for (int j=0;j<B.size();j++){
            if (A[i]<=B[j]){
                s+=B.size()-j;
                break;
            }
        }
    }
    cout << s;
    return 0;
}