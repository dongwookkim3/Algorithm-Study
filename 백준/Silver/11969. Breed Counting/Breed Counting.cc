#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    int A[MAX+1]={},B[MAX+1]={},C[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        A[i]=A[i-1];
        B[i]=B[i-1];
        C[i]=C[i-1];
        if (a==1){
            A[i]++;
        }
        else if (a==2){
            B[i]++;
        }
        else if (a==3){
            C[i]++;
        }
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << A[b]-A[a-1] << ' ' << B[b]-B[a-1] << ' ' << C[b]-C[a-1] << "\n";
    }
    return 0;
}