#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='e') cout << "ee";
        else cout << A[i];
    }
    return 0;
}