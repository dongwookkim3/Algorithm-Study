#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	int A[1025][1025]={};
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >> A[i][j];
			A[i][j]+=A[i][j-1];
		}
	}
	while(m--){
		int x1,x2,y1,y2,m=0;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int j=y1;j<=y2;j++){
			m+=A[j][x2]-A[j][x1-1];
		}
		cout << m << "\n";
	}
	return 0;
}