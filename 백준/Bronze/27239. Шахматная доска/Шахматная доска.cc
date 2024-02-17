#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << char((n-1)%8+97) << (n-1)/8+1;
    return 0;
}