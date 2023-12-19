#include <iostream>
#include <cmath>
using namespace std;
int main(){
	unsigned long long A;
	cin >> A;
	unsigned long long B=sqrt(A);
	if (B*B<A) B++; 
	cout << B;
	return 0;
}