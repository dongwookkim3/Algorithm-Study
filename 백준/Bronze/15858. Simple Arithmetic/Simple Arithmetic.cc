#include <iostream>
using namespace std;
int main(){
	cout << fixed;
	cout.precision(6);
	long a,b,c;
	cin >> a >> b >> c;
	cout << (double)a*b/c;
	return 0;
}