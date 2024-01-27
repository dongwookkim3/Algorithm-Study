#include <iostream>
using namespace std;
int main(){
    string A,B="CAMBRIDGE";
    cin >> A;
    for (int i=0;i<A.length();i++){
        for (int j=0;j<B.length();j++){
            if (A[i]==B[j]){
                break;
            }
            else if (j==B.length()-1){
                cout << A[i];
            }
        }
    }
    return 0;
}