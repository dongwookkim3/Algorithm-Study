#include <iostream>
#include <vector>
#define MAX 10000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long> P;
    vector<bool> PRIME(MAX,false);
    PRIME[0]=PRIME[1]=true;
    long long A,B,m=0;
    cin >> A >> B;
    for (long long i=2;i<=MAX;i++){
        if (!PRIME[i]){
            for (long long j=i*i;j<=MAX;j+=i){
                PRIME[j]=true;
            }
            if (i*i<=B){
                P.push_back(i);
            }
        }
    }
    for (long long i=0;i<P.size();i++){
        if (to_string(P[i]).length()>=6 && P[i]*P[i]>=A){
            m++;
            continue;
        }
        long long s=P[i];
        while(P[i]*s<=B){
            P[i]*=s;
            if (P[i]>=A){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}