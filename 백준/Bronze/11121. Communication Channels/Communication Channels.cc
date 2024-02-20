#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A,B;
        cin >> A >> B;
        if (A==B) cout << "OK\n";
        else cout << "ERROR\n";
    }
    return 0;
}