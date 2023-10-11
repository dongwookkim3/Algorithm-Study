#include <iostream>
using namespace std;
int main(){
	int n,A[4]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=max(A[1],max(A[2],A[3]));i++){
		for (int j=1;j<=n;j++){
			if (A[j]%i!=0) break;
			if (j==n) cout << i << " ";
		}
	}
	return 0;
}