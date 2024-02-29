#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=99;i++){
        for (int j=1;j<=99;j++){
            if (i+j==n){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}