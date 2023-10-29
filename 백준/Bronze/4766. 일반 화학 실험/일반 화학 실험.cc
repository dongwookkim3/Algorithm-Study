#include <iostream>
using namespace std;
int main(){
	cout << fixed;
	cout.precision(2);
	float A[100000]={};
	for (int i=1;;i++){
		cin >> A[i];
		if (A[i]==999) return 0;
		if (i>1){
			cout << A[i]-A[i-1] << "\n";
		}
	}
}