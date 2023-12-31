#include <iostream>

using namespace std;

int main(void) {
    int a;
    int c;
    cin >> a >> c;
    a*=a; c*=c;
    int b_square = c - a;
    cout << b_square << endl;
    return 0;
}