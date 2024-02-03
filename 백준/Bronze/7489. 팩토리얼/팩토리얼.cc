#include <iostream>
#define MOD 1000000
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m=1;
        cin >> n;
        for (long long i=2;i<=n;i++){
            m*=i;
            while(m%10==0){
                m/=10;
            }
            m%=MOD;
        }
        cout << m%10 << "\n";
    }
    return 0;
}