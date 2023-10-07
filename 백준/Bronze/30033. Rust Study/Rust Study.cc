#include <iostream>
using namespace std;
int main(){
	int n,A[1001]={},B[1001]={},m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=n;i++){
		cin >> B[i];
		if (A[i]<=B[i]) m++;
	}
	cout << m;
	return 0;
}