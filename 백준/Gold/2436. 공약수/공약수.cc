#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b,A,B;
    cin >> a >> b;
    for (long long i=1;i*i<=b/a;i++){
        if ((b/a)%i==0){
            long long f=0;
            for (long long j=1;j<=i;j++){
                if (i%j==0 && (b/a/i)%j==0){
                    f++;
                }
            }
            if (f<=1){
                A=a*i;
                B=b/i;
            }
        }
    }
    cout << A << ' ' << B;
    return 0;
}