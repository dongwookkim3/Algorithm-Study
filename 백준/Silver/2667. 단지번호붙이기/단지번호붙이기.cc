#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#define MAX 25
using namespace std;
bool A[MAX+1][MAX+1];
int DFS(int x,int y){
    if (x==0 || x==MAX+1 || y==0 || y==MAX+1 || A[x][y]==0){
        return 0;
    }
    A[x][y]=false;
    int m=DFS(x+1,y)+DFS(x-1,y)+DFS(x,y+1)+DFS(x,y-1);
    return ++m;
}
int main(){
    int n;
    vector<int> B;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%1d",&A[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (A[i][j]){
                B.push_back(DFS(i,j));
            }
        }
    }
    cout << B.size() << "\n";
    sort(B.begin(),B.end());
    for (int i=0;i<B.size();i++){
        cout << B[i] << "\n";
    }
    return 0;
}