#include <iostream>
using namespace std;
int main(){
    int A=0,B=0,n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        if (a>b) A+=a+b;
        else if (a<b) B+=a+b;
        else{
            A+=a;
            B+=b;
        }
    }
    cout << A << ' ' << B;
    return 0;
}