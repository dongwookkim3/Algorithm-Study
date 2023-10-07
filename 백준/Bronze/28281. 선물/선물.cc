#include <iostream>
using namespace std;
int main(){
	int n,m,A[100001]={};
	long int min=2000000000;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<n;i++){
		if (A[i]+A[i+1]<min) min=A[i]+A[i+1];
	}
	cout << min*m;
	return 0;
}