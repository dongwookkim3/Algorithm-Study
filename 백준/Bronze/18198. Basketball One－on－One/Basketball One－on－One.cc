#include <iostream>
using namespace std;
int main(){
    int a=0,b=0;
    string A;
    cin >> A;
    for (int i=0;i<A.length();i+=2){
        if (A[i]=='A'){
            a+=A[i+1]-48;
        }
        else {
            b+=A[i+1]-48;
        }
    }
    if (a>b) cout << 'A';
    else cout << 'B';
    return 0;
}