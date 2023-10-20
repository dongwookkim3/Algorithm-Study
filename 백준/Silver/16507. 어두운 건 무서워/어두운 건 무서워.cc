#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,k;
	int A[1001][1001]={};
	cin >> n >> m >> k;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> A[i][j];
			A[i][j]+=A[i][j-1];
		}
	}
	while(k--){
		int x1,x2,y1,y2;
		int m=0;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int i=y1;i<=y2;i++){
			m+=A[i][x2]-A[i][x1-1];
		}
		cout << m/((x2-x1+1)*(y2-y1+1)) << "\n";
	}
	return 0;
}