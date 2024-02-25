#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        for (int j=0;j<f(A[i]);j++){
            cout << A[i];
        }
        cout << "\n";
    }
    return 0;
}