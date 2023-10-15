#include <iostream>
using namespace std;
int main(){
	int n,m,s=1000000;
	char A[51][51];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> A[i][j];
		}
	}
	for (int i=1;i<=n-7;i++){
		for (int j=1;j<=m-7;j++){
			int t=0;
			for (int x=i;x<=i+7;x++){
				for (int y=j;y<=j+7;y++){
					if ((x+y)%2==0){
						if (A[x][y]=='W'){
							t++;
						}
					}
					else {
						if (A[x][y]=='B'){
							t++;
						}
					}
				}
			}
			s=min(s,min(64-t,t));
		}
	}
	cout << s;
	return 0;
}