#include <iostream>
using namespace std;
int main(){
    string A;
    while(cin >> A && A!="0"){
        while(A.length()!=1){
            cout << A << ' ';
            int m=1;
            for (int i=0;i<A.length();i++){
                m*=A[i]-48;
            }
            A=to_string(m);
        }
        cout << A << "\n";
    }
    return 0;
}