#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    int A[MAX+1]={};
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=1;i<=n;i++){
        if (A[i]==i){
            if (i==n){
                A[i]=1;
            }
            else {
                A[i]=i+1;
            }
            m++;
        }
    }
    cout << m << "\n";
    for (int i=1;i<=n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}