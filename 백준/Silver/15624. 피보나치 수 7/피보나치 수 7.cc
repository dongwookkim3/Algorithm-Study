#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long A[1000001]={0,1,1};
	int n;
	cin >> n;
	if (n<=2) cout << A[n];
	else {
		for (int i=3;i<=n;i++){
			A[i]=(A[i-1]+A[i-2])%1000000007;
		}
		cout << A[n];
	}
	return 0;
}