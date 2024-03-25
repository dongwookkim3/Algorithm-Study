#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    if (!n){
        cout << 1;
        return 0;
    }
    for (int i=0;;i++){
        if (n<m){
            cout << i;
            break;
        }
        m*=10;
        m++;
    }
    return 0;
}