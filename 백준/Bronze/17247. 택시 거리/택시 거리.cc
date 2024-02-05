#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int n,m,x,y,s,f=0;
    int A[MAX+1][MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> A[i][j];
            if (A[i][j] && f){
                s=abs(i-x)+abs(j-y);
            }
            else if (A[i][j]){
                x=i;
                y=j;
                f=1;
            }
        }
    }
    cout << s;
    return 0;
}