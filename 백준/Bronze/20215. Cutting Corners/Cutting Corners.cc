#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    cout << fixed;
    cout.precision(6);
    cout << double(A+B-sqrt(A*A+B*B));
    return 0;
}