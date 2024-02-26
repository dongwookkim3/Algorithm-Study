#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,m=0;
    string A,B;
    cin >> n >> A >> B;
    for (int i=0;i<n;i++){
        m+=min({abs(A[i]-B[i]),abs(A[i]-B[i]+26),abs(A[i]-B[i]-26)});
    }
    cout << m;
    return 0;
}