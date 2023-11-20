#include <iostream>
using namespace std;
int main(){
	int n;
	string A;
	cin >> n;
	getchar();
	getline(cin,A);
	if (A[n-1]=='G'){
		for (int i=0;i<n-1;i++){
			cout << A[i];
		}
	}
	else {
		cout << A << 'G';
	}
	return 0;
}