#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	long long A[MAX+1]={1,1};
	int n;
	cin >> n;
	for (int i=2;i<=n;i++){
		A[i]=(A[i-2]*2+A[i-1])%10007;
	}
	cout << A[n];
	return 0;
}