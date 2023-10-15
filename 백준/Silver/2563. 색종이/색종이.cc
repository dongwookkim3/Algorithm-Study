#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m=0;
	int A[101][101]={};
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		for (int i=a;i<=a+9;i++){
			for (int j=b;j<=b+9;j++){
				A[i][j]=1;
			}
		}
	}
	for (int i=1;i<=100;i++){
		for (int j=1;j<=100;j++){
			if (A[i][j]==1) m++;
		}
	}
	cout << m;
	return 0;
}