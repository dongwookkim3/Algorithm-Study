#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        while(n/10){
            int m=0;
            while(n){
                m+=n%10;
                n/=10;
            }
            n=m;
        }
        cout << n << "\n";
    }
    return 0;
}