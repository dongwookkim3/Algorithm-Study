#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    for(int i=1;i<=4;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    cout << A[0]*A[2];
    return 0;
}