#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> A(n),B,C(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
        C[i]=A[i];
        if (!A.empty()){
            A[i]+=A[i-1];
        }
    }
    for (int i=1;i<n;i++){
        B.push_back(2*n-3*i-2+A[i-1]+A[i]-A[n-1]);
    }
    sort(C.begin(),C.end());
    if (C.front()==C.back()  || B.empty()){
        cout << 0;
    }
    else {
        cout << *min_element(B.begin(),B.end());
    }
    return 0;
}