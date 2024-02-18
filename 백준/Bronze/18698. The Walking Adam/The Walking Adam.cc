#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='D'){
                cout << i << "\n";
                break;
            }
            else if (i==A.length()-1){
                cout << A.length() << "\n";
            }
        }
    }
    return 0;
}