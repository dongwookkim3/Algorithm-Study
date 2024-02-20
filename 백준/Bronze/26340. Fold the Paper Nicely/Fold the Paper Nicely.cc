#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B,C;
        cin >> A >> B >> C;
        cout << "Data set: " << A << ' ' << B << ' ' << C << "\n";
        while(C--){
            if (A>=B){
                A/=2;
            }
            else {
                B/=2;
            }
        }
        cout << max(A,B) << ' ' << min(A,B) << "\n\n";
    }
    return 0;
}