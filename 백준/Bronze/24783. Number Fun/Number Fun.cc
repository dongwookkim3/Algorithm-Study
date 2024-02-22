#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B,C;
        cin >> A >> B >> C;
        if (A+B==C || abs(A-B)==C || A*B==C || ((A%B==0 || B%A==0) && (A/B==C || B/A==C))){
            cout << "Possible\n";
        }
        else {
            cout << "Impossible\n";
        }
    }
    return 0;
}