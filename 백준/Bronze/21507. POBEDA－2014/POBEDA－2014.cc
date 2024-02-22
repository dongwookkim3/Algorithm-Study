#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned long long A,B,C,D;
    cin >> A >> B >> C >> D;
    unsigned long long n=min(A,B)+min(C,D);
    for (unsigned long long i=1;;i++){
        if (i*i>n){
            cout << i-1;
            break;
        }
    }
    return 0;
}