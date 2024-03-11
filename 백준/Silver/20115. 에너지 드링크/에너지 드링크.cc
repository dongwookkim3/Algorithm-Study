#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n,m=0;
    cin >> n;
    vector<long long> A(n);
    while(n--){
        cin >> A[n];
        m+=A[n];
    }
    sort(A.begin(),A.end());
    cout << fixed;
    cout.precision(6);
    cout << A.back()+float(m-A.back())/2;
    return 0;
}