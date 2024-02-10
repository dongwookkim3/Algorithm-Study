#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int Br,Bc,Dr,Dc,Jr,Jc;
    cin >> Br >> Bc >> Dr >> Dc >> Jr >> Jc;
    int B=abs(Br-Jr)+abs(Bc-Jc)-min(abs(Br-Jr),abs(Bc-Jc)),D=abs(Dr-Jr)+abs(Dc-Jc);
    if (B<D) cout << "bessie";
    else if (B>D) cout << "daisy";
    else cout << "tie";
    return 0;
}