#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=2;i<=n;i++){
        while(n%i==0){
            m++;
            n/=i;
        }
    }
    for (int i=0;;i++){
        if (m<=pow(2,i)){
            cout << i;
            break;
        }
    }
    return 0;
}