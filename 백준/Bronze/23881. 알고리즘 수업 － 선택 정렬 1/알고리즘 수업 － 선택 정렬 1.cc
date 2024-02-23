#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    int A[MAX+1]={};
    int n,k;
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=n;i>=1;i--){
        int m=A[i],mindex=0;
        for (int j=1;j<i;j++){
            if (A[j]>m){
                m=A[j];
                mindex=j;
            }
        }
        if (mindex){
            int t=A[i];
            A[i]=A[mindex];
            A[mindex]=t;
            k--;
            if (!k){
                cout << A[mindex] << ' ' << A[i];
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}