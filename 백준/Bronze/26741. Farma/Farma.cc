#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=0;;i++){
        if (2*i+4*(A-i)==B){
            cout << i << ' ' << A-i;
            break;
        }
    }
    return 0;
}