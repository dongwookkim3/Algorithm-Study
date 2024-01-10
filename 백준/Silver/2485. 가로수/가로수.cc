#include <iostream>
#define MAX 100000
using namespace std;
int GCD(int A,int B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int main(){
	int n;
	int A[MAX+1]={};
	int B[MAX+1]={};
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> A[i];
		if (i>=1){
			B[i]=A[i]-A[i-1];
		}
	}
	int g=B[1];
	for (int i=2;i<n;i++){
		g=GCD(g,B[i]);
	}
	cout << (A[n-1]-A[0])/g-n+1;
	return 0;
}