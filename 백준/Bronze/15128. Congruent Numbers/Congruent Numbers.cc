#include <iostream>
using namespace std;
int main(){
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << !((A*C)%(B*D*2));
    return 0;
}