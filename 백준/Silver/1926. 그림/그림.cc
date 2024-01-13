#include <iostream>
#define MAX 500
using namespace std;
int n,m,t,s;
int A[MAX+1][MAX+1];
int f(int x,int y,int a){
    if (x==0 || x==n+1 || y==0 || y==m+1) return 0;
    A[x][y]=0;
    if (A[x+1][y]) a+=f(x+1,y,0);
    if (A[x-1][y]) a+=f(x-1,y,0);
    if (A[x][y+1]) a+=f(x,y+1,0);
    if (A[x][y-1]) a+=f(x,y-1,0);
    return a+1;
}
int main(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> A[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (A[i][j]){
                s=max(s,f(i,j,0));
                t++;
            }
        }
    }
    cout << t << "\n" << s;
    return 0;
}