#include <iostream>
using namespace std;
int main(){
	int m=0;
	string A;
	getline(cin,A);
	for (int i=0;A[i+3]!='\0';i++){
		if (A[i]=='D' && A[i+1]=='K' && A[i+2]=='S' && A[i+3]=='H'){
			m++;
		}
	}
	cout << m;
	return 0;
}