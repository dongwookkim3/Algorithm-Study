#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a,b;
    char A[101][101];
	cin >> n >> m;
	cin >> a >> b;
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=m;j++){
    		if ((i+j)%2==0){
    			A[i][j]='X';
			}
			else {
				A[i][j]='.';
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=a;j++){
			for (int k=1;k<=m;k++){
				for (int q=1;q<=b;q++){
					cout << A[i][k];
				}
			}
			cout << "\n";
		}
	}
	return 0;
}
