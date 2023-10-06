#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long int A;
	cin >> A;
	cout<<fixed;
	cout.precision(6);
	cout << sqrt(A/M_PI)*M_PI*2;
	return 0;
}