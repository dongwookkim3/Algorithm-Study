#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    int t;
    long long A[MAX+1]={};
    long long B[MAX+1]={};
    for (long long i=2;i<=MAX;i++){
        for (long long j=i*2;j<=MAX;j+=i){
            A[j]++;
            if (B[j]==0){
                B[j]=i;
            }
        }
    }
    cin >> t;
    for (int i=1;i<=t;i++){
        int n,m,s=0;
        cin >> n >> m;
        for (int j=2;j<n;j++){
            if (A[j]==A[n]){
                if (B[j]>=m){
                    s++;
                }
            }
        }
        cout << "Case #" << i << ": " << s << "\n";
    }
    return 0;
}