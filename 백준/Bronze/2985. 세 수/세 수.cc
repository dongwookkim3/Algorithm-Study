#include <iostream>
using namespace std;
int main(){
	int A,B,C;
	cin >> A >> B >> C;
	if (A+B==C) cout << A << '+' << B << '=' << C;
	else if (A==B+C) cout << A << '=' << B << '+' << C;
	else if (A-B==C) cout << A << '-' << B << '=' << C;
	else if (A==B-C) cout << A << '=' << B << '-' << C;
	else if (A*B==C) cout << A << '*' << B << '=' << C;
	else if (A==B*C) cout << A << '=' << B << '*' << C;
	else if (A/B==C) cout << A << '/' << B << '=' << C;
	else if (A==B/C) cout << A << '=' << B << '/' << C;
	return 0;
}