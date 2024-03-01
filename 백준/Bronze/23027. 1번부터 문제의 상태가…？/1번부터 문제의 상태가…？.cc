#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    if (A.find('A')!=string::npos){
        for (int i=0;i<A.length();i++){
            if (A[i]=='B' || A[i]=='C' || A[i]=='D' || A[i]=='F'){
                cout << 'A';
            }
            else {
                cout << A[i];
            }
        }
    }
    else if (A.find('B')!=string::npos){
        for (int i=0;i<A.length();i++){
            if (A[i]=='C' || A[i]=='D' || A[i]=='F'){
                cout << 'B';
            }
            else {
                cout << A[i];
            }
        }
    }
    else if (A.find('C')!=string::npos){
        for (int i=0;i<A.length();i++){
            if (A[i]=='D' || A[i]=='F'){
                cout << 'C';
            }
            else {
                cout << A[i];
            }
        }
    }
    else {
        for (int i=0;i<A.length();i++){
            cout << 'A';
        }
    }
    return 0;
}