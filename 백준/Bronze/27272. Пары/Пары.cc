#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 4
using namespace std;
int main(){
    vector<int> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    cout << A[0]*A[1]+A[2]*A[3];
    return 0;
}