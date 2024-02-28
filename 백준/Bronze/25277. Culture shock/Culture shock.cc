#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        string A;
        cin >> A;
        if (A=="he" || A=="him" || A=="she" || A=="her"){
            m++;
        }
    }
    cout << m;
    return 0;
}