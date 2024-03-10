#include <iostream>
using namespace std;
int main(){
    long long A,B=1;
    cin >> A;
    if (A==0){
        cout << 0;
        return 0;
    }
    for (long long i=1;;i++){
        if (A<=B){
            cout << i;
            break;
        }
        B*=2;
    }
    return 0;
}