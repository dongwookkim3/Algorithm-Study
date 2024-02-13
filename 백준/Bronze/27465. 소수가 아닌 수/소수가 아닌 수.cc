#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=n;;i++){
        bool f=false;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                f=true;
                break;
            }
        }
        if (f){
            cout << i;
            break;
        }
    }
    return 0;
}