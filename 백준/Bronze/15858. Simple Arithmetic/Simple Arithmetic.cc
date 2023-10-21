#include <iostream>
using namespace std;
int main(){
	cout << fixed;
	cout.precision(7);
	long long a,b,c;
	cin >> a >> b >> c;
	cout << (long double)a*b/c;
	return 0;
}