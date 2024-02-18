#include <iostream>
using namespace std;
void f(int n,int m){
    if (n/m){
        f(n/m,m);
        if (n%m>9){
            cout << char(n%m+55);
        }
        else {
            cout << n%m;
        }
    }
    else {
        if (n>9){
            cout << char(n+55);
        }
        else {
            cout << n;
        }
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    f(n,m);
    return 0;
}