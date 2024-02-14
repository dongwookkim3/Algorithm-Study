#include <iostream>
#include <string>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();){
        if (A[i]<=57){
            A.erase(A.begin()+i);
        }
        else {
            i++;
        }
    }
    for (int i=0;i<B.length();){
        if (B[i]<=57){
            B.erase(B.begin()+i);
        }
        else {
            i++;
        }
    }
    cout << (A.find(B)!=string::npos);
    return 0;
}