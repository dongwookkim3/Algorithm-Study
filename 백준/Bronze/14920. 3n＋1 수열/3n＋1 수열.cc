#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;;i++){
        if (n==1){
            cout << i;
            break;
        }
        else if (n%2) n=n*3+1;
        else n/=2;
    }
    return 0;
}