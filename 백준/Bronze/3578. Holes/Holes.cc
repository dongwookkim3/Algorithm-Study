#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n==0) cout << 1;
    else if (n==1) cout << 0;
    else {
        if (n%2) cout << 4;
        for (int i=1;i<=n/2;i++){
            cout << 8;
        }
    }
    return 0;
}