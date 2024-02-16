#include <iostream>
using namespace std;
int main(){
    int A;
    cin >> A;
    cout << fixed;
    cout.precision(2);
    cout << max(float(100),float(min(float(2000),25+float(A)/100)));
    return 0;
}