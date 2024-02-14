#include <iostream>
#include <string>
using namespace std;
int main(){
    string A,B;
    int n;
    cin >> A >> n;
    if (stoi(A)*A.length()<=n){
        for (int i=0;i<stoi(A);i++){
            cout << A;
        }
        return 0;
    }
    for (int i=0;i<n;i++){
        B+=A[i%A.length()];
    }
    cout << B;
    return 0;
}