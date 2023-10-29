#include <iostream>
#define MAX 250000
using namespace std;
int main(){
	int n,m,max=0,t=0;
	long A[MAX+1];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	for (int i=m;i<=n;i++){
		if (max<A[i]-A[i-m]){
			max=A[i]-A[i-m];
		}
	}
	if (!max){
		cout << "SAD";
		return 0;
	}
	for (int i=m;i<=n;i++){
		if (max==A[i]-A[i-m]){
			t++;
		}
	}
	cout << max << "\n" << t;
	return 0;
}