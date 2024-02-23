#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A;
    while(cin >> B){
        for (int i=0;i<A.length();i++){
            if (A.substr(i,B.length())==B){
                A[i]+=32;
            }
        }
    }
    cout << A;
    return 0;
}