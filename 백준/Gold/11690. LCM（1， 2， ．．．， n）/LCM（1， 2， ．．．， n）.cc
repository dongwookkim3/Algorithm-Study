#include <iostream>
#include <vector>
#define MAX 100000000
#define MOD 4294967296
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<bool> PRIME(MAX+1,false);
    vector<int> P;
    PRIME[0]=PRIME[1]=true;
    long long n,m=1;
    cin >> n;
    for (long long i=2;i<=MAX;i++){
        if (!PRIME[i]){
            for (long long j=i*i;j<=MAX;j+=i){
                PRIME[j]=true;
            }
            if (i<=n){
                P.push_back(i);
            }
        }
    }
    while(!P.empty()){
        long long S=P.back(),s=P.back();
        P.pop_back();
        while(n>=S*s){
            S*=s;
        }
        m*=S%MOD;
        m%=MOD;
    }
    cout << m;
    return 0;
}