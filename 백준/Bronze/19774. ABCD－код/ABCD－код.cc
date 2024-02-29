#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A;
        cin >> A;
        if (int(pow(stoi(A.substr(0,2)),2)+pow(stoi(A.substr(2,2)),2))%7==1){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}