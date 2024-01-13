#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int n,m;
int A[MAX+1][MAX+1];
int f(int x,int y,int s){
    if (x==-1 || x==n || y==-1 || y==m) return 0;
    A[x][y]=1;
    if (A[x+1][y]==0) s+=f(x+1,y,0);
    if (A[x-1][y]==0) s+=f(x-1,y,0);
    if (A[x][y+1]==0) s+=f(x,y+1,0);
    if (A[x][y-1]==0) s+=f(x,y-1,0);
    return ++s;
}
int main(){
    int k,t=0;
    int B[MAX+1]={};
    int index=0;
    cin >> n >> m >> k;
    while(k--){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i=y1;i<y2;i++){
            for (int j=x1;j<x2;j++){
                A[i][j]=1;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (A[i][j]==0){
                t++;
                B[index]=f(i,j,0);
                index++;
            }
        }
    }
    cout << t << "\n";
    sort(B,B+index);
    for (int i=0;i<index;i++){
        cout << B[i] << ' ';
    }
    return 0;
}
