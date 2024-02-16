#include <iostream>
using namespace std;
int main(){
    int A,m=0;
    cin >> A;
    for (int i=1;i<=4;i++){
        int n;
        cin >> n;
        if (A-n<=1000){
            m++;
        }
    }
    cout << m;
    return 0;
}