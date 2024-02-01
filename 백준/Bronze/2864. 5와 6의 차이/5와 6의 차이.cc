#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]=='6'){
            A[i]='5';
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]=='6'){
            B[i]='5';
        }
    }
    cout << stoi(A)+stoi(B) << ' ';
    for (int i=0;i<A.length();i++){
        if (A[i]=='5'){
            A[i]='6';
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]=='5'){
            B[i]='6';
        }
    }
    cout << stoi(A)+stoi(B);
    return 0;
}