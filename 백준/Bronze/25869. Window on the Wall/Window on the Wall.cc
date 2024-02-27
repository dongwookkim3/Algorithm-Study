#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if ((A<=C*2) || (B<=C*2)) cout << 0;
    else cout << (A-C*2)*(B-C*2);
    return 0;
}