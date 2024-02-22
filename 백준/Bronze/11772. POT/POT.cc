#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,m=0;
    cin >> n;
    while(n--){
        int A;
        cin >> A;
        m+=pow(A/10,A%10);
    }
    cout << m;
    return 0;
}