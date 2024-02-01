#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    cout << (abs(b-a)+1)*(a+b)/2;
    return 0;
}