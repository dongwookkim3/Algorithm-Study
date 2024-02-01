#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << M_PI*pow(r,2) << "\n" << 2*pow(r,2);
    return 0;
}