#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char A[5];
	cin >> A;
	int n=strlen(A);
	if (n==2){
		cout << A[0]+A[1]-96;
	}
	else if (n==3){
		if (A[1]=='0'){
			cout << A[2]-38;
		}
		else {
			cout << A[0]-38;
		}
	}
	else {
		cout << 20;
	}
	return 0;
}