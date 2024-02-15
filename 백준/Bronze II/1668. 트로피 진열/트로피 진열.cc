#include <iostream>
#define MAX 50
using namespace std;
int main(){
    int A[MAX+1]={};
    int n,m1=0,m2=1,s=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        if (A[i]>s){
            s=A[i];
            m1++;
        }
    }
    for (int i=n-1;i>=1;i--){
        if (A[i]>A[i+1]){
            m2++;
        }
        A[i]=max(A[i],A[i+1]);
    }
    cout << m1 << "\n" << m2;
    return 0;
}