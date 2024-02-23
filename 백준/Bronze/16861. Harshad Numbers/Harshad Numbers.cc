#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    int n;
    cin >> n;
    for (int i=n;;i++){
        if (i%f(i)==0){
            cout << i;
            break;
        }
    }
    return 0;
}