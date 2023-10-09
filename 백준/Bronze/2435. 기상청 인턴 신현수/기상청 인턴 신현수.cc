#include <iostream>
using namespace std;
int main(){
	int n,k,A[201]={},max=-100000;
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=n-k+1;i++){
		for (int j=i+1;j<i+k;j++){
			A[i]+=A[j];
		}
		if (max<A[i]) max=A[i];
	}
	cout << max;
	return 0;
}