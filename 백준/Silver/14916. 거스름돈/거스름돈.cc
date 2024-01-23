#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;;i++){
        if (i*2>n){
            cout << -1;
            break;
        }
        else if ((n-i*2)%5==0){
            cout << i+(n-i*2)/5;
            break;
        }
    }
    return 0;
}