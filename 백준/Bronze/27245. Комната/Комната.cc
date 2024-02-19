#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if ((min(A,B)>=C*2) && (max(A,B)<=min(A,B)*2)) cout << "good";
    else cout << "bad";
    return 0;
}