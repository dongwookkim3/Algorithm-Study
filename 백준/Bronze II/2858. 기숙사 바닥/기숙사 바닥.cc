#include <iostream>
#define MAX 5000
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=3;;i++){
        for (int j=3;i*j-(i-2)*(j-2)<=MAX;j++){
            if (i*j-(i-2)*(j-2)==A && (i-2)*(j-2)==B){
                cout << j << ' ' << i;
                return 0;
            }
        }
    }
}