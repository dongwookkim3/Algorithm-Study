#include <iostream>
using namespace std;
long long GCD(long long A,long long B){
	if (B==0) return A;
	return GCD(B,A%B);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int A=a*d+b*c;
	int B=b*d;
	while(GCD(A,B)!=1){
		int gcd=GCD(A,B);
		A/=gcd;
		B/=gcd;
	}
	cout << A << " " << B;
	return 0;
}