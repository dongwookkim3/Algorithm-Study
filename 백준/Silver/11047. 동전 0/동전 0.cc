#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long k;
	int n,A[11]={},m=0;
	cin >> n >> k;
	for (int i=n;i>=1;i--){
		cin >> A[i];
	}
	for (int i=1;i<=n;i++){
		while(A[i]<=k){
			k-=A[i];
			m++;
		}
	}
	cout << m;
	return 0;
}