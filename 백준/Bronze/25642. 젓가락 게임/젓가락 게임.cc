#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=1;A<5 && B<5;i++){
        if (i%2) B+=A;
        else A+=B;
    }
    if (B>=5) cout << "yt";
    else cout << "yj";
    return 0;
}