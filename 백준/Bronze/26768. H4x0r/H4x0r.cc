#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='a') A[i]='4';
        else if (A[i]=='e') A[i]='3';
        else if (A[i]=='i') A[i]='1';
        else if (A[i]=='o') A[i]='0';
        else if (A[i]=='s') A[i]='5';
    }
    cout << A;
    return 0;
}