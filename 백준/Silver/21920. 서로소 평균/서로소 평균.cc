#include <iostream>
#define MAX 500000
using namespace std;
int GCD(int A,int B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int main(){
	long long n,m=0;
	long long A[MAX+1]={};
	double t=0,s=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	cin >> m;
	for (int i=1;i<=n;i++){
		if (GCD(A[i],m)==1){
			t+=A[i];
			s++;
		}
	}
	cout << t/s;
	return 0;
}