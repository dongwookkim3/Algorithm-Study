#include <iostream>
using namespace std;
int main(){
    int n,m;
    string A;
    cin >> n >> m >> A;
    for (int i=m-1;i<A.length();i++){
        if (A[i]>=96) A[i]-=32;
        else A[i]+=32;
    }
    cout << A;
    return 0;
}