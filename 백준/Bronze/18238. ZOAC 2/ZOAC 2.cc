#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int m=0;
    cin >> A;
    A.insert(A.begin(),'A');
    for (int i=1;i<A.length();i++){
        m+=min({abs(A[i-1]-A[i]),abs(A[i-1]-A[i]+26),abs(A[i-1]-A[i]-26)});
    }
    cout << m;
    return 0;
}