#include <iostream>
#define MAX 30
using namespace std;
int main(){
	int A[MAX+1][MAX+1]={{0},{1,1}};
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			if (i==j || j==1) A[i][j]=1;
			else A[i][j]=A[i-1][j]+A[i-1][j-1];
		}
	}
	cout << A[n][m];
	return 0;
}