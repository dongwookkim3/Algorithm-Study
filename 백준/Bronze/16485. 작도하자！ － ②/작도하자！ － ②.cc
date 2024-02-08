#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    cout << fixed;
    cout.precision(6);
    cout << double(A/B);
    return 0;
}