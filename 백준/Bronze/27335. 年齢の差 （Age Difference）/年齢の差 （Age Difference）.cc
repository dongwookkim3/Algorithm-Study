#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> A;
    for (int i=0;i<n;i++){
        long long a;
        cin >> a;
        A.push_back(a);
    }
    vector<long long> B=A;
    sort(B.begin(),B.end());
    for (int i=0;i<n;i++){
        cout << max(abs(A[i]-B.front()),abs(A[i]-B.back())) << "\n";
    }
    return 0;
}