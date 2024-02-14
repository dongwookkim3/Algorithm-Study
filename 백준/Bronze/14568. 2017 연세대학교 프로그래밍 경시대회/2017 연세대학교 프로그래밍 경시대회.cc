#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n>0){
        n-=2;
        for (int i=1;i<=n;i++){
            if (n-i>=i+2){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}