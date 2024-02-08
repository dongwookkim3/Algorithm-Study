#include <iostream>
using namespace std;
int main(){
    int m1=0,m2=0,m3=0;
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='_'){
            m1=1;
        }
        else if (A[i]<=90){
            m2=1;
        }
        if (i>=2){
            if (A[i-2]=='_' && A[i-1]=='_'){
                m3=1;
            }
        }
    }
    if (m1&&m2 || m3 || A[A.length()-1]=='_' || A[0]=='_' || (A[0]<=90)){
        cout << "Error!";
    }
    else if (m1){
        cout << A[0];
        for (int i=1;i<A.length();i++){
            if (A[i]=='_'){
                continue;
            }
            else if (A[i-1]=='_'){
                cout << char(A[i]-32);
            }
            else {
                cout << A[i];
            }
        }
    }
    else if (m2){
        cout << A[0];
        for (int i=1;i<A.length();i++){
            if (A[i]<=90){
                cout << '_' << char(A[i]+32);
            }
            else {
                cout << A[i];
            }
        }
    }
    else {
        cout << A;
    }
    return 0;
}