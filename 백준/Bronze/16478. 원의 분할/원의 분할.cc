#include <iostream>
using namespace std;
int main(){
    float A,B,C;
    cin >> A >> B >> C;
    cout << fixed;
    cout.precision(7);
    cout << A/B*C;
    return 0;
}