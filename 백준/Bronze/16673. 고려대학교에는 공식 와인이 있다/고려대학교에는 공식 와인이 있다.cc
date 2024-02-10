#include <iostream>
using namespace std;
int main(){
    int C,K,P,m=0;
    cin >> C >> K >> P;
    for (int i=1;i<=C;i++){
        m+=K*i+P*i*i;
    }
    cout << m;
    return 0;
}