#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        m+=A[i]-64;
    }
    cout << m;
    return 0;
}