#include <iostream>
#include <cmath>
using namespace std;
void binary(unsigned long long n){
    if (n/2){
        binary(n/2);
        cout << n%2;
    }
    else cout << n;
}
int main(){
    unsigned long long a=0,b=0;
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        a+=(A[i]-48)*pow(2,A.length()-i-1);
    }
    for (int i=0;i<B.length();i++){
        b+=(B[i]-48)*pow(2,B.length()-i-1);
    }
    binary(a*b);
    return 0;
}