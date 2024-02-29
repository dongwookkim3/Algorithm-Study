#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    int A,B,X;
    cin >> A >> B >> X;
    for (int i=A;;i++){
        if (f(i)==X){
            cout << i << "\n";
            break;
        }
    }
    for (int i=B;;i--){
        if (f(i)==X){
            cout << i;
            break;
        }
    }
    return 0;
}