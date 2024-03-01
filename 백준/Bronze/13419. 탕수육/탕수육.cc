#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A,B,C;
        cin >> A;
        for (int i=0;i<A.length()*2;i++){
            if (i%2) C+=A[i%A.length()];
            else B+=A[i%A.length()];
        }
        if (A.length()%2){
            cout << B << "\n" << C << "\n";
        }
        else {
            cout << B.substr(0,A.length()/2) << "\n" << C.substr(0,A.length()/2) << "\n";
        }
    }
    return 0;
}