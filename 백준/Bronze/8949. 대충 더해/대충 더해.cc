#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    if (A.length()>B.length()){
        string T=A;
        A=B;
        B=T;
    }
    while(A.length()!=B.length()){
        A.insert(A.begin(),'0');
    }
    for (int i=0;i<A.length();i++){
        cout << A[i]+B[i]-96;
    }
    return 0;
}