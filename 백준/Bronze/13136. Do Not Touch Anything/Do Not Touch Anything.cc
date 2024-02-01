#include <iostream>
using namespace std;
int main(){
    long a,b,n;
    cin >> a >> b >> n;
    while(a%n){
        a++;
    }
    while(b%n){
        b++;
    }
    cout << (a/n)*(b/n);
    return 0;
}