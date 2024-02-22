#include <iostream>
using namespace std;
int main(){
    double A;
    long long B=0;
    while(cin >> A){
        B+=A*100;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)B/100;
    return 0;
}