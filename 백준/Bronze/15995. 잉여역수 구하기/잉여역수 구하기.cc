#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=1;;i++){
        if ((A*i)%B==1){
            cout << i;
            break;
        }
    }
    return 0;
}