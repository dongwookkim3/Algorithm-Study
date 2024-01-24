#include <iostream>
using namespace std;
int main(){
    long long n,m1=0,m2=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        m1+=a;
        m2+=a*a;
    }
    cout << (m1*m1-m2)/2;
    return 0;
}