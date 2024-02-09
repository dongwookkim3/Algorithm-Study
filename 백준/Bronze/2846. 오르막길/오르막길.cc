#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int A[MAX+1]={100};
    int B[MAX+1]={};
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        if (A[i]>A[i-1]){
            B[i]=A[i]-A[i-1]+B[i-1];
            if (m<B[i]){
                m=B[i];
            }
        }
    }
    cout << m;
    return 0;
}