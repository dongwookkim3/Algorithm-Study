#include <iostream>
using namespace std;
int main(){
    int k;
    string A;
    cin >> A;
    for (int i=1;;i++){
        if ((A.front()^i)=='C'){
            k=i;
            break;
        }
    }
    for (int i=0;i<A.length();i++){
        cout << char(A[i]^k);
    }
    return 0;
}