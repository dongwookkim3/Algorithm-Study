#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double A,B;
        cin >> A >> B;
        cout << fixed;
        cout.precision(1);
        cout << abs(A-B) << "\n";
    }
    return 0;
}