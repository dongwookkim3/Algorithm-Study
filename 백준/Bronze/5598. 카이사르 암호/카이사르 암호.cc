#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]<=67){
            cout << (char)(A[i]+23);
        }
        else {
            cout << (char)(A[i]-3);
        }
    }
    return 0;
}