#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,m,A=1;
    cin >> n >> m;
    while(n--){
        A*=(n+1);
        A%=m;
    }
    cout << A;
    return 0;
}