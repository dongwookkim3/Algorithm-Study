#include <iostream>
#include <algorithm>
using namespace std;
int A[1001]={0,1,2};
int main(){
	int n;
	cin >> n;
	if (n<=2) cout << A[n];
	else {
		for (int i=3;i<=n;i++){
			A[i]=(A[i-1]+A[i-2])%10007;
		}
		cout << A[n];
	}
	return 0;
}