#include <iostream>
#define MAX 100
using namespace std;
int main(){
	int n,m=0;
	bool A[MAX+2][MAX+2]={};
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		for (int i=a;i<a+10 && i<=MAX;i++){
			for (int j=b;j<b+10 && j<=MAX;j++){
				A[i][j]=1;
			}
		}
	}
	for (int i=1;i<=MAX;i++){
		for (int j=1;j<=MAX;j++){
			if (A[i][j]){
				if (!A[i+1][j]) m++;
				if (!A[i-1][j]) m++;
				if (!A[i][j+1]) m++;
				if (!A[i][j-1]) m++;
			}
		}
	}
	cout << m;
	return 0;
}
