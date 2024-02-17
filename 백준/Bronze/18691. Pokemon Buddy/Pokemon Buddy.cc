#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B,C;
        cin >> A >> B >> C;
        if (B>=C) cout << "0\n";
        else cout << (C-B)*(A*2-1) << "\n";
    }
    return 0;
}