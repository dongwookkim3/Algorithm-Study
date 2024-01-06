#include <iostream>
using namespace std;
int main(){
	int n,l,m=0;
	string A;
	cin >> n >> l >> A;
	for (int i=0;i<l-n*2;i++){
		if (A[i]=='I'){
			for (int j=i+1;j<=2*n+i;j++){
				if (A[j-1]==A[j]) break;
				else if (j==2*n+i) m++;
			}
		}
	}
	cout << m;
	return 0;
}