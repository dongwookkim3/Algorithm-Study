#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int A,B,C;
        cin >> A >> B >> C;
        if (A>B){
            int p=A;
            A=B;
            B=p;
        }
        if (B>C){
            int p=B;
            B=C;
            C=p;
        }
        cout << "Scenario #" << i << ":\n";
        if (A*A+B*B==C*C){
            cout << "yes\n\n";
        }
        else {
            cout << "no\n\n";
        }
    }
    return 0;
}