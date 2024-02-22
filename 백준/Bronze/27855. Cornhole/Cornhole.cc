#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A*3+B==C*3+D) cout << "NO SCORE";
    else {
        cout << (A*3+B<C*3+D)+1 << ' ' << abs(A*3+B-C*3-D);
    }
    return 0;
}