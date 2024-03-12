#include <iostream>
using namespace std;
int GCD(int A,int B){
    if (!B) return A;
    return GCD(B,A%B);
}
int main(){
    int A,B;
    scanf("%d:%d",&A,&B);
    cout << A/GCD(A,B) << ':' << B/GCD(A,B);
    return 0;
}