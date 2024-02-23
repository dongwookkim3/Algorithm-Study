#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        string A;
        cin >> a >> b >> A;
        for (int i=0;i<A.length();i++){
            cout << char(((A[i]-65)*a+b)%26+65);
        }
        cout << "\n";
    }
    return 0;
}