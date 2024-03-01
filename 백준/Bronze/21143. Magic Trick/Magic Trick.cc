#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    cin >> A;
    sort(A.begin(),A.end());
    for (int i=1;i<A.length();i++){
        if (A[i-1]==A[i]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}