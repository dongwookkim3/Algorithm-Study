#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int n,m=0;
    int A[MAX+1]={};
    int B[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        for (int j=1;j<i;j++){
            if (A[i]>A[j]){
                if (B[i]<B[j]){
                    B[i]=B[j];
                }
            }
        }
        B[i]+=A[i];
        if (m<B[i]){
            m=B[i];
        }
    }
    cout << m;
    return 0;
}