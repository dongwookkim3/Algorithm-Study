#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	long long A[100001]={},max=-10000000;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	for (int i=1;i<=n-m+1;i++){
		if (A[i+m-1]-A[i-1]>max) max=A[i+m-1]-A[i-1];
	}
	cout << max;
	return 0;
}