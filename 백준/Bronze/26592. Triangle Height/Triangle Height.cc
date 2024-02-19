#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(2);
    while(t--){
        double A,B;
        cin >> A >> B;
        cout << "The height of the triangle is " << 2*A/B << " units\n";
    }
    return 0;
}