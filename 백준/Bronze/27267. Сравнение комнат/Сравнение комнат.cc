#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A*B>C*D) cout << 'M';
    else if (A*B<C*D) cout << 'P';
    else cout << 'E';
    return 0;
}