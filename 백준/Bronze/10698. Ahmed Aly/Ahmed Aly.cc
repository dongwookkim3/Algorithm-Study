#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int A,B,C;
        char a,b;
        cin >> A >> a >> B >> b >> C;
        cout << "Case " << i << ": ";
        if ((a=='+' && A+B==C) || (a=='-' && A-B==C)){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}