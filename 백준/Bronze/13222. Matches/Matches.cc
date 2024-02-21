#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    while(A--){
        int n;
        cin >> n;
        if (B*B+C*C>=n*n){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}