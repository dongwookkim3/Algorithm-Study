#include <iostream>
using namespace std;
int main(){
    string A,B;
    int n,m=201;
    while(cin >> A >> n){
        if (m>n){
            B=A;
            m=n;
        }
    }
    cout << B;
    return 0;
}