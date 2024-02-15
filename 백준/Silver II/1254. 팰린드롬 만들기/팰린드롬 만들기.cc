#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int index=0;
    string A,B,C;
    cin >> A;
    C=A+B;
    reverse(C.begin(),C.end());
    while(A+B!=C){
        B.insert(B.begin(),A[index]);
        index++;
        C=A+B;
        reverse(C.begin(),C.end());
    }
    cout << A.length()+B.length();
    return 0;
}