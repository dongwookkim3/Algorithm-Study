#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define MAX 11
using namespace std;
int main(){
    vector<int> A;
    int m=0;
    for (int i=0;i<MAX;i++){
        int a,b;
        cin >> a >> b;
        A.push_back(a);
        m+=20*b;
    }
    sort(A.begin(),A.end());
    for (int i=1;i<MAX;i++){
        A[i]+=A[i-1];
    }
    cout << m+accumulate(A.begin(),A.end(),0);
    return 0;
}