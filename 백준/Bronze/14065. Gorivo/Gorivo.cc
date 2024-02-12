#include <iostream>
using namespace std;
int main(){
    double A;
    double B=3785.411784;
    double C=1609.344;
    cin >> A;
    cout << fixed;
    cout.precision(6);
    cout << 100/(A*C/B);
    return 0;
}