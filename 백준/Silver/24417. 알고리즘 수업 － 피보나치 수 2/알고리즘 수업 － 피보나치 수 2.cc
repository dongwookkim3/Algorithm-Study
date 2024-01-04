#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	long long A[4]={0,1,1,2};
	cin >> n;
	for (int i=3;i<=n;i++){
		A[1]=A[2];
		A[2]=A[3];
		A[3]=(A[2]+A[1])%1000000007;
	}
	cout << A[2] << ' ' << n-2; 
    return 0;
}