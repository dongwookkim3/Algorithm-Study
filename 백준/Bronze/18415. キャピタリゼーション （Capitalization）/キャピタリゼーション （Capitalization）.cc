#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<n-2;i++){
        if (A.substr(i,3)=="joi"){
            for (int j=0;j<3;j++){
                A[i+j]-=32;
            }
        }
    }
    cout << A;
    return 0;
}