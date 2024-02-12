#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 3
using namespace std;
int main(){
    vector<int> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    cout << min({(A[0]*2+A[1])*2,(A[0]+A[2])*2,(A[1]+A[2]*2)*2});
    return 0;
}