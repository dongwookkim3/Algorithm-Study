#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[i]=1;
    }
    int B[MAX+1]={};
    int n,m,s=0,sindex;
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int a,b;
        cin >> a >> b;
        if (b-a>s){
            s=b-a;
            sindex=i;
        }
        for (int j=a;j<=b;j++){
            B[i]+=A[j];
            A[j]=0;
        }
    }
    cout << sindex << "\n";
    s=B[0];
    for (int i=1;i<=n;i++){
        if (B[i]>s){
            s=B[i];
            sindex=i;
        }
    }
    cout << sindex;
    return 0;
}