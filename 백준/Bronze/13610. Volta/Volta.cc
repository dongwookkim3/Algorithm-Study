#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if (A*2<=B){
        cout << 2;
        return 0;
    }
    for (int i=2;;i++){
        if (A*(i+1)<=B*i){
            cout << i+1;
            break;
        }
    }
    return 0;
}