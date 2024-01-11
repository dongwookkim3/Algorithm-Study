#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    if (n%2==0){
        cout << n << " is even";
    }
    else {
        cout << n << " is odd";
    }
    return 0;
}