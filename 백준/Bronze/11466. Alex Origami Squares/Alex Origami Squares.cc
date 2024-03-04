#include <iostream>
using namespace std;
int main(){
    float A,B;
    cin >> A >> B;
    if (B>A){
        float T=A;
        A=B;
        B=T;
    }
    cout << fixed;
    cout.precision(4);
    cout << max(min(A/3,B),min(A/2,B/2));
    return 0;
}