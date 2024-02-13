#include <iostream>
using namespace std;
int main(){
    int A,B,C,m=1,o=0;
    cin >> A >> B >> C;
    if (A%2) m*=A,o++;
    if (B%2) m*=B,o++;
    if (C%2) m*=C,o++;
    if (m==1 && o==0) cout << A*B*C;
    else cout << m;
    return 0;
}