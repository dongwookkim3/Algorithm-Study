#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A,B;
    int n,m;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=0;i<m-1;i++){
        A.push_back(A[i]);
    }
    for (int i=1;i<A.size();i++){
        A[i]+=A[i-1];
    }
    B.push_back(A[m-1]);
    for (int i=m;i<A.size();i++){
        B.push_back(A[i]-A[i-m]);
    }
    cout << *max_element(B.begin(),B.end());
    return 0;
}