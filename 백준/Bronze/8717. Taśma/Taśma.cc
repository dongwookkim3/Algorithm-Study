#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int n,A[1000001]={},m=0,t=0,q=10000000;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		m+=A[i];
	}
	for (int i=1;i<n;i++){
		m-=A[i];
		t+=A[i];
		if (abs(m-t)<q) q=abs(m-t);
	}
	cout << q;
	return 0;
}