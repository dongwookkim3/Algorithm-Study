#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(9);
    cout << (double)sqrt(3)*n*n/4;
    return 0;
}