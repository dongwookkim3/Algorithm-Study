#include <iostream>
using namespace std;
int GCD(int A,int B){
    if (!B) return A;
    return GCD(B,A%B);
}
int main(){
    int A,B;
    cin >> A >> B;
    cout << GCD(A,B);
    return 0;
}