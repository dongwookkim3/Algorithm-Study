#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=2;i<A.length();i++){
        if (A[i-2]==A[i-1] && A[i-1]==A[i] && A[i]=='o'){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}