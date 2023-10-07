#include <iostream>
using namespace std;
int main(){
	long long A[302]={};
	for (int i=1;i<=301;i++){
		A[i]=i+A[i-1];
	}
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
		int n;
		long long m=0;
		cin >> n;
		for (int j=1;j<=n;j++){
			m+=j*A[j+1];
		}
		cout << m << endl;
	}
	return 0;
}