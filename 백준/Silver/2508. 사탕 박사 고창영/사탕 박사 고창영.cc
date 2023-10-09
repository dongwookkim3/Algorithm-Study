#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int a,b,m=0;
		char A[401][401];
		cin >> a >> b;
		for (int i=1;i<=a;i++){
			for (int j=1;j<=b;j++){
				cin >> A[i][j];
				if (A[i][j]=='<' && A[i][j-1]=='o' && A[i][j-2]=='>' && j>=2){
					m++;
				}
				else if (A[i][j]=='^' && A[i-1][j]=='o' && A[i-2][j]=='v' && i>=2){
					m++;
				}
			}
		}
		cout << m << "\n";
	}
	return 0;
}