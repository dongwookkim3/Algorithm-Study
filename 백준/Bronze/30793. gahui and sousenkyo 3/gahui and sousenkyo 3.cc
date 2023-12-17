#include <iostream>
using namespace std;
int main(){
	int b;
	float a;
	cin >> a >> b;
	a/=b;
	if (a>=0.6) cout << "very strong";
	else if (a>=0.4) cout << "strong";
	else if (a>=0.2) cout << "normal";
	else cout << "weak";
	return 0;
}