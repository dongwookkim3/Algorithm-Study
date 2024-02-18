#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double A1,R1,P1,P2;
        cin >> A1 >> P1 >> R1 >> P2;
        A1/=P1;
        R1=(R1*R1*M_PI)/P2;
        if (A1<=R1) cout << "Whole pizza\n";
        else cout << "Slice of pizza\n";
    }
    return 0;
}