#include <iostream>
using namespace std;
int main(){
	/*
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	*/
	int n;
	long long A[500001]={},m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
		A[i]%=1000000007;
	}
	for (int i=2;i<=n;i++){
		m+=(A[i-1]*(A[i]-A[i-1]))%1000000007;
	}
	cout << m%1000000007;
	return 0;
}