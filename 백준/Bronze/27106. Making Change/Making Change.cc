#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    n=100-n;
    cout << n/25 << ' ' << (n%25)/10 << ' ' << ((n%25)%10)/5 << ' ' << n%5;
    return 0;
}