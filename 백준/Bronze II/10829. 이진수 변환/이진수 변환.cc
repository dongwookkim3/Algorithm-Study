#include <iostream>
using namespace std;
void binary(long long n){
    if (n/2){
        binary(n/2);
        cout << n%2;
    }
    else cout << n;
}
int main(){
    long long n;
    cin >> n;
    binary(n);
    return 0;
}