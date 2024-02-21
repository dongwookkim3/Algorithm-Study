#include <iostream>
using namespace std;
int main(){
    int A,B;
    while(cin >> A >> B && (A || B)){
        cout << 2*A-B << "\n";
    }
    return 0;
}