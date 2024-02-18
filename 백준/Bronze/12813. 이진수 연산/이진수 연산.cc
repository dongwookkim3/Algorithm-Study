#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]==B[i] && B[i]==49){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << "\n";
    for (int i=0;i<A.length();i++){
        if (A[i]==49 || B[i]==49){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << "\n";
    for (int i=0;i<A.length();i++){
        if ((A[i]==49 || B[i]==49) && A[i]!=B[i]){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << "\n";
    for (int i=0;i<A.length();i++){
        if (A[i]==48){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << "\n";
    for (int i=0;i<A.length();i++){
        if (B[i]==48){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    return 0;
}