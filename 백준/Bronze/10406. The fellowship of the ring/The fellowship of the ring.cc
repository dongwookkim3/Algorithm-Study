#include <iostream>
using namespace std;
int main(){
    int A,B,C,m=0;
    cin >> A >> B >> C;
    while(C--){
        int a;
        cin >> a;
        if (a>=A && a<=B){
            m++;
        }
    }
    cout << m;
    return 0;
}