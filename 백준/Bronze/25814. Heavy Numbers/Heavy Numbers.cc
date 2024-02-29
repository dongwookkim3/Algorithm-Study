#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    string A,B;
    cin >> A >> B;
    if (f(stoi(A))*A.length()>f(stoi(B))*B.length()){
        cout << 1;
    }
    else if (f(stoi(A))*A.length()<f(stoi(B))*B.length()){
        cout << 2;
    }
    else {
        cout << 0;
    }
    return 0;
}