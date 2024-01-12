#include <iostream>
#define MAX 50
using namespace std;
bool A[MAX+1][MAX+1];
void f(int x,int y){
	if (x<0 || x>MAX || y<0 || y>MAX){
		return;
	}
	A[x][y]=0;
	if (A[x+1][y]) f(x+1,y);
	if (A[x-1][y]) f(x-1,y);
	if (A[x][y+1]) f(x,y+1);
	if (A[x][y-1]) f(x,y-1);
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int n,m,k,t=0;
		cin >> n >> m >> k;
		for (int i=0;i<=MAX;i++){
			for (int j=0;j<=MAX;j++){
				A[i][j]=0;
			}
		}
		while(k--){
			int x,y;
			cin >> x >> y;
			A[y][x]=1;
		}
		for (int i=0;i<=m;i++){
			for (int j=0;j<=n;j++){
				if (A[i][j]){
					f(i,j);
					t++;
				}
			}
		}
		cout << t << "\n";
	}
	return 0;
}