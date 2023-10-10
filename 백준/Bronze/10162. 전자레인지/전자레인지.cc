#include <iostream>
using namespace std;
int main(){
	int n,A=0,B=0,C=0;
	cin >> n;
	while(n>=300){
		n-=300;
		A++;
	}
	while(n>=60){
		n-=60;
		B++;
	}
	while(n>=10){
		n-=10;
		C++;
	}
	if (n==0) cout << A << " " << B << " " << C;
	else cout << -1;
	return 0;
}