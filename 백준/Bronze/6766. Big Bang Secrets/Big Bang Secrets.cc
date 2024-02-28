#include <iostream>
using namespace std;
int main(){
    int k;
    string A;
    cin >> k >> A;
    for (int i=0;i<A.length();i++){
        A[i]=(A[i]%65-3*(i+1)-k+260)%26+65;
    }
    cout << A;
    return 0;
}