#include <iostream>
using namespace std;
int main(){
    int n,A=0,B=0;
    cin >> n;
    for (int i=0;n!=0;i++){
        if (i%2) A+=n/2+n%2;
        else B+=n/2+n%2;
        n-=n/2+n%2;
    }
    cout << A << ' ' << B;
    return 0;
}