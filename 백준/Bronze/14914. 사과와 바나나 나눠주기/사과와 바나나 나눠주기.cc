#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=1;i<=A;i++){
        if (A%i==0 && B%i==0){
            cout << i << ' ' << A/i << ' ' << B/i << "\n";
        }
    }
    return 0;
}