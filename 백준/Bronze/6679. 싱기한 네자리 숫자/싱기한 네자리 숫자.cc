#include <iostream>
using namespace std;
int a(int n){
    if (n>11) return a(n/12)+n%12;
    else return n;
}
int b(int n){
    if (n>15) return b(n/16)+n%16;
    else return n;
}
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    for (int i=1000;i<10000;i++){
        if (f(i)==a(i) && a(i)==b(i)){
            cout << i << "\n";
        }
    }
    return 0;
}