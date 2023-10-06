#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long int A;
	cin >> A;
	cout<<fixed;
	cout.precision(6);
	cout << sqrt(A/3.141592)*M_PI*2;
	return 0;
}