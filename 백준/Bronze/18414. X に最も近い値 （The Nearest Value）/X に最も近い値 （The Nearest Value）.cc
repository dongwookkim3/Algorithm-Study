#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if (A>=B && A<=C) cout << A;
    else if (A>C) cout << C;
    else if (A<B) cout << B;
    return 0;
}