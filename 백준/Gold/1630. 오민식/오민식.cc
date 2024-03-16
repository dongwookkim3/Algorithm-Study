#include <iostream>
#include <vector>
#define MOD 987654321
#define MAX 1000000
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<bool> PRIME(MAX,false);
    for (long long i=2;i*i<=MAX;i++){
        if (!PRIME[i]){
            for (long long j=i*i;j<MAX;j+=i){
                PRIME[j]=true;
            }
        }
    }
    vector<long long> A;
    long long n,m=1;
    cin >> n;
    for (int i=2;i<=n;i++){
        if (!PRIME[i]){
            long long s=i;
            while(s*i<=n){
                s*=i;
            }
            A.push_back(s);
        }
    }
    while(!A.empty()){
        m*=A.back();
        A.pop_back();
        m%=MOD;
    }
    cout << m;
    return 0;
}