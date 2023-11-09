#include <iostream>
#define MAX 100000
using namespace std;
int main(){
	long long n,k,m=0;
	long long A[MAX+1]={};
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
		if (i>=k){
			if (A[i]-A[i-k]>m) m=A[i]-A[i-k];
		}
		else if (A[i]>m) m=A[i];
	}
	cout << m;
	return 0;
}