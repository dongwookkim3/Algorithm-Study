#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int R,A,B;
    cin >> R >> A >> B;
    cout << int(A*sqrt((double)R*R/(A*A+B*B))) << ' ' << int(B*sqrt((double)R*R/(A*A+B*B)));
    return 0;
}