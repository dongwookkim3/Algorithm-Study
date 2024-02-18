#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B;
        cin >> A >> B;
        cout << A << ' ' << B << "\n" << B+(A-1)*(B-2) << "\n";
    }
    return 0;
}