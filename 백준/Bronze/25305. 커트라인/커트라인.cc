#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,k,A[1001]={};
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A,A+n+1);
	cout << A[n-k+1];
	return 0;
}