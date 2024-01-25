#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    for (long long j=1;j<=t;j++){
        long long n,m;
        cin >> n >> m;
        unsigned long long A[MAX+1]={0,1};
        for (long long i=2;i<=n;i++){
            A[i]=(A[i-1]+A[i-2])%m;
        }
        cout << "Case #" << j << ": " << A[n]%m << "\n";
    }
    return 0;
}