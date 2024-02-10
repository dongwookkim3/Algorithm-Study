#include <iostream>
using namespace std;
int main(){
    long long A,B;
    while(cin >> A >> B && (A!=0 || B!=0)){
        cout << A/B << ' ' << A%B << " / " << B << "\n";
    }
    return 0;
}