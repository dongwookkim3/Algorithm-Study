#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A,B;
        cin >> A;
        B=A;
        reverse(B.begin(),B.end());
        string C=to_string(stoi(A)+stoi(B));
        B=C;
        reverse(B.begin(),B.end());
        if (B==C) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}