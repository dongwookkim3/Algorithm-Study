#include <iostream>
using namespace std;
long long GCD(long long A,long long B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int main(){
	long long A,B;
	cin >> A >> B;
	cout << A*B/GCD(A,B);
	return 0;
}