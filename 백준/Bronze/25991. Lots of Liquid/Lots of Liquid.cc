#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    double m=0;
    cin >> n;
    while(n--){
        double A;
        cin >> A;
        m+=A*A*A;
    }
    cout << fixed;
    cout.precision(6);
    cout << pow(m,1.0/3.0);
    return 0;
}