#include <iostream>
#define MOD 1000000000000
using namespace std;
int main(){
    long long n,m=1;
    cin >> n;
    for (long long i=2;i<=n;i++){
        m*=i;
        while(m%10==0){
            m/=10;
        }
        m%=MOD;
    }
    cout.width(5);
    cout.fill('0');
    cout << m%(MOD/10000000);
    return 0;
}