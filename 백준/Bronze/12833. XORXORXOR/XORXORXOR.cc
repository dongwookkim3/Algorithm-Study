#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    C%=2;
    while(C--){
        A^=B;
    }
    cout << A;
}