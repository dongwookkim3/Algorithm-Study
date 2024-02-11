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
    cout << A[1];
    return 0;
}