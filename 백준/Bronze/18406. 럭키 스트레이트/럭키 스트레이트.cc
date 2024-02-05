#include <iostream>
using namespace std;
int main(){
    string A;
    int m1=0,m2=0;
    cin >> A;
    for (int i=0;i<A.length()/2;i++){
        m1+=A[i]-48;
    }
    for (int i=A.length()/2;i<A.length();i++){
        m2+=A[i]-48;
    }
    if (m1==m2){
        cout << "LUCKY";
    }
    else {
        cout << "READY";
    }
    return 0;
}