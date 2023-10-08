#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,A=0,B=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		char a;
		cin >> a;
		if (a=='D') A++;
		else B++;
		if (abs(A-B)>=2) break;
	}
	cout << A << ":" << B;
	return 0;
}