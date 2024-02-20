#include <iostream>
using namespace std;
int main(){
    unsigned long long A,B;
    cin >> A >> B;
    if (B==1) cout << -1;
    else {
        if ((A*B)%(B-1)==0){
            cout << A*B/(B-1);
        }
        else {
            cout << A*B/(B-1)+1;
        }
    }
    return 0;
}