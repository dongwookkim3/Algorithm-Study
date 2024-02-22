#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 3
using namespace std;
int main(){
    vector<long long> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    if (A[1]==0) cout << A.back();
    else cout << A[1]*A.back()+A.front();
    return 0;
}