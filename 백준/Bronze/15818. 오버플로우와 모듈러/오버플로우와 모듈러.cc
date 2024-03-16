#include <iostream>
using namespace std;
int main(){
    long long A,B,m=1;
    cin >> A >> B;
    while(A--){
        int a;
        cin >> a;
        m*=a;
        m%=B;
    }
    cout << m;
    return 0;
}