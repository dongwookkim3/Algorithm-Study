#include <iostream>
using namespace std;
unsigned long long GCD(unsigned long long A,unsigned long long B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int main(){
	unsigned long long A,B;
	cin >> A >> B;
	unsigned long long T=GCD(A,B);
	while(T--){
		cout << 1;
	}
	return 0;
}