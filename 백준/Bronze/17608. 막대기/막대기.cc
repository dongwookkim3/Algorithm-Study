#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    int n,m=0;
    int A[MAX+1]={};
    cin >> n;
    for (int i=n;i>=1;i--){
        cin >> A[i];
    }
    for (int i=1;i<=n;i++){
        if (A[i]>A[i-1]){
            m++;
        }
        else {
            A[i]=A[i-1];
        }
    }
    cout << m;
    return 0;
}