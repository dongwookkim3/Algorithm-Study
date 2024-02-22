#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]!='I' && A[i]!='O' && A[i]!='S' && A[i]!='H' && A[i]!='Z' && A[i]!='X' && A[i]!='N'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}