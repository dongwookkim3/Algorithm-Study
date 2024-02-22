#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=1;i<A.length();i++){
        if (A[i-1]==A[i] && A[i]=='s'){
            cout << "hiss";
            return 0;
        }
    }
    cout << "no hiss";
    return 0;
}