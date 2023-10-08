#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int A,B,C,D,E;
	cin >> A >> B >> C >> D >> E;
	if (A>0) {
		cout << (B-A)*E;
	}
	else if (A==0){
		cout <<B*E+D;
	}
	else {
		cout << abs(A)*C+D+B*E;
	}
	return 0;
}