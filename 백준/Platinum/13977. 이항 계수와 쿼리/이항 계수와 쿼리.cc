#include <iostream>
#define MAX 4000000
#define MOD 1000000007
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long F[MAX+1]={1};
    for (int i=1;i<=MAX;i++){
        F[i]=(F[i-1]*i)%MOD;
    }
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        long long A=F[n],B=(F[n-m]*F[m])%MOD,k=MOD-2;
        while(k>0){
            if (k%2==1){
                A*=B;
                A%=MOD;
            }
            k/=2;
            B*=B;
            B%=MOD;
        }
        cout << A << "\n";
    }
    return 0;
}