#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    for (int i=1;;i++){
        C-=A;
        if (i%7==0){
            C-=B;
        }
        if (C<=0){
            cout << i;
            break;
        }
    }
    return 0;
}