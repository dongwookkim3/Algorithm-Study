#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    int A[MAX+1]={},B[MAX+1]={};
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=1;i<=n;i++){
        cin >> B[i];
    }
    for (int i=1;i<=n;i++){
        if (A[i]!=B[i]){
            break;
        }
        else if (i==n){
            cout << 1;
            return 0;
        }
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
            for (int j=1;j<=n;j++){
                if (A[j]!=B[j]){
                    break;
                }
                else if (j==n){
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
    return 0;
}