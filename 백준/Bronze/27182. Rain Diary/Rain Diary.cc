#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if (A>B) cout << B+7;
    else if ((B+7)%(B+14-A)) cout << (B+7)%(B+14-A);
    else cout << B+7;
    return 0;
}