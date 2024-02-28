#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    cout << accumulate(A.begin(),A.end(),0)-*max_element(A.begin(),A.end())-*min_element(A.begin(),A.end());
    return 0;
}