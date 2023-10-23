#include <iostream>
using namespace std;
int main(){
	string A;
	cin >> A;
	cout << A[0];
	for(int i=1;A[i]!='\0';i++){
		if (A[i-1]=='-'){
			cout << A[i];
		}
	}
	return 0;
}