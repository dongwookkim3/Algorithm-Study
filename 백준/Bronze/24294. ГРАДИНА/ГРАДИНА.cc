#include <iostream>
using namespace std;
int main(){
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << (A+B+C+D+4)*2-(min(A,C)+2)*2;
    return 0;
}