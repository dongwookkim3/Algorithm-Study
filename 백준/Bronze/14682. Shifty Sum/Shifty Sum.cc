#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int m=n;
    for (int i=1;i<=k;i++){
        n*=10;
        m+=n;
    }
    cout << m;
    return 0;
}