#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	int n;
	int A[MAX+1][MAX+1]={};
	cin >> n;
	for (int k=1;k<=n;k++){
		int a,b,x,y;
		cin >> a >> b >> x >> y;
		for (int i=a;i<a+x;i++){
			for (int j=b;j<b+y;j++){
				A[i][j]=k;
			}
		}
	}
	for (int k=1;k<=n;k++){
		int m=0;
		for (int i=0;i<=MAX;i++){
			for (int j=0;j<=MAX;j++){
				if (A[i][j]==k){
					m++;
				}
			}
		}
		cout << m << "\n";
	}
	return 0;
}
