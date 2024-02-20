#include <iostream>
using namespace std;
int main(){
    double A,B,C;
    cin >> A >> B >> C;
    cout << fixed;
    cout.precision(6);
    cout << ((229*324*A+297*420*B)*2+210*297*C)/1000000;
    return 0;
}