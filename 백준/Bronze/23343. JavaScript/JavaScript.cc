#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]>57){
            cout << "NaN";
            return 0;
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]>57){
            cout << "NaN";
            return 0;
        }
    }
    cout << stoi(A)-stoi(B);
    return 0;
}