#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;;i++){
        if (n/10==0){
            cout << i;
            break;
        }
        int m=1;
        while(n){
            m*=n%10;
            n/=10;
        }
        n=m;
    }
    return 0;
}