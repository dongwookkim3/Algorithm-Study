#include <iostream>
#include <cmath>
using namespace std;
int main(){
     double A1,R1,P1,P2;
     cin >> A1 >> P1 >> R1 >> P2;
     A1/=P1;
     R1=(R1*R1*M_PI)/P2;
     if (A1<=R1) cout << "Whole pizza";
     else cout << "Slice of pizza";
     return 0;
}