#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << int(sqrt(n)) << ' ' << n/int(sqrt(n))+bool(n%int(sqrt(n)));
    return 0;
}