#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 3
using namespace std;
int main(){
    vector<int> A;
    for (int i=0;i<MAX;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    if (A[0]+A[2]==2*A[1]){
        cout << A[2]+A[1]-A[0];
    }
    else {
        cout << A[2]-A[1]+A[0];
    }
    return 0;
}