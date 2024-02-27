#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(1);
    while(t--){
        int A,B;
        cin >> A >> B;
        cout << "f = " << (float)(A*B)/(A+B) << "\n";
    }
    return 0;
}