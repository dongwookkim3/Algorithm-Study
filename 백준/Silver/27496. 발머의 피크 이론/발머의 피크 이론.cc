#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k,m=0,A[1000001]={};
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	for (int i=1;i<=n;i++){
		//cout << A[i]-A[i-k] << "\n";
		if (A[i]-A[max(0,i-k)]>=129 && A[i]-A[max(0,i-k)]<=138){
			m++;
		}
	}
	cout << m;
	return 0;
}