#include <iostream>
using namespace std;
int main(){
    int n,m=0,k;
    cin >> n >> k;
    while(k--){
        int a;
        cin >> a;
        m+=n-a;
    }
    cout << m+n;
    return 0;
}