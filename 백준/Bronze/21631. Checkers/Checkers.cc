#include <iostream>
using namespace std;
int main(){
    long long A,B;
    cin >> A >> B;
    if (A>=B) cout << B;
    else cout << A+1;
    return 0;
}