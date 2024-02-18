#include <iostream>
using namespace std;
int main(){
    long long A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;
    if (A+B<=C*2) cout << A*X+B*Y;
    else cout << min(A*(X-min(X,Y))+B*(Y-min(X,Y))+C*2*min(X,Y),C*2*max(X,Y));
    return 0;
}