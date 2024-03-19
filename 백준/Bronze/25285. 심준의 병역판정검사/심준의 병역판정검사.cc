#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        float A,B;
        cin >> A >> B;
        B/=A/100*A/100;
        if (A<140.1) cout << "6\n";
        else if (A<146) cout << "5\n";
        else if (A<159) cout << "4\n";
        else if (A<161){
            if (B<16 || B>=35) cout << "4\n";
            else cout << "3\n";
        }
        else if (A<204){
            if (B<16 || B>=35) cout << "4\n";
            else if (B<18.5 || B>=30) cout << "3\n";
            else if (B<20 || B>=25) cout << "2\n";
            else cout << "1\n";
        }
        else cout << "4\n";
    }
    return 0;
}